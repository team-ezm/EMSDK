//
//  TableViewController.m
//  EMSDKDemo
//
//  Created by xuchang on 2021/10/26.
//

#import "TableViewController.h"
#import <EMSDK/EMSDK.h>

@interface TableViewController ()
@property (nonatomic, strong) NSMutableArray *list;
@end

@implementation TableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
    _list = [NSMutableArray array];
    
    [EMSDKCore getBindAppletListWithPage:0 size:10 success:^(NSArray * _Nullable list) {
        if (list) {
            [_list addObjectsFromArray:list];
            [self.tableView reloadData];
        }
    } failure:^(NSString * _Nonnull error) {
        if (error) {
            
        }
    }];
    
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return _list.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *reuseIdentifier = @"reuseIdentifier";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:reuseIdentifier forIndexPath:indexPath];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:reuseIdentifier];
    }
    cell.textLabel.text = _list[indexPath.row][@"name"];
    cell.detailTextLabel.text = _list[indexPath.row][@"uniqueCode"];
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    if (indexPath.row % 2 == 0) {
        [EMSDKCore openAppletWithId:_list[indexPath.row][@"uniqueCode"] viewController:self];
    } else {
//        [EMSDKCore openAppletWithId:_list[indexPath.row][@"uniqueCode"] toolbarTitle:_list[indexPath.row][@"name"] toolbarBackColor:@"#00ff00" toolbarTitleColor:@"#000000" isShowBackBtn:YES isHideToolBar:NO isHideFunctionButton:YES isHideButtonLine:NO viewController:self];
        
//        [EMSDKCore openAppletWithId:_list[indexPath.row][@"uniqueCode"] toolbarTitle:_list[indexPath.row][@"name"] toolbarBackColor:@"#00ff00" toolbarDarkBackColor:@"0000ff" toolbarTitleColor:@"#000000" toolbarTitleDarkColor:@"00ff00" isShowBackBtn:YES isHideToolBar:NO isHideFunctionButton:NO isHideButtonLine:NO viewController:self];
    }
}



@end
