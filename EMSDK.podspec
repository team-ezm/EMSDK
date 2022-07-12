
Pod::Spec.new do |s|
  s.name             = 'EMSDK'
  s.summary          = 'Easy Mobile SDK'
  s.version          = '1.0.5'
  s.license          = { :type => "MIT", :file => "LICENSE" }
  s.description      = <<-DESC
                       Easy Mobile SDK
                       DESC
  s.homepage         = 'https://www.yd-mobile.cn'
  s.author           = { '徐畅' => 'xuchang@supcon.com' }
  s.source           = { :git => 'https://github.com/team-ezm/EMSDK.git', :tag => s.version.to_s }
  s.platform     = :ios
  s.ios.deployment_target = '9.0'
  s.requires_arc = true
  s.static_framework = true
  s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO','EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'  }
  s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO','EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.default_subspec = 'Core'
  
  s.subspec 'Core' do |sp|
    
     sp.source_files  = "*.{h,m}"

     sp.resources = ["Frameworks/*.bundle", "Resources/**"]
     
#     sp.dependency "EMCenterModule"
#     sp.dependency "EMMiniprogramModule"
#     sp.dependency "EMFileSystemModule"
     
     
     sp.vendored_frameworks = 'Frameworks/*.framework'

     sp.dependency "YYCache",'1.0.4'
     sp.dependency "FDFullscreenPopGesture",'1.1'
     sp.dependency "YYCategories",'1.0.4'
     sp.dependency "MBProgressHUD",'1.2.0'
     sp.dependency "SAMKeychain",'1.5.3'
     sp.dependency "Reachability",'3.2'
     sp.dependency "AFNetworking",'4.0.0'
#     sp.dependency "SDWebImage","4.4.3"
     sp.dependency "IQKeyboardManager",'6.5.5'
     sp.dependency "Masonry",'1.1.0'
     
  end
  
  s.subspec 'Debug' do |sp|
    sp.vendored_frameworks = 'Frameworks/Debug/*.framework'
    sp.resources = 'Frameworks/Debug/*.bundle'
    sp.dependency 'EMSDK/Core'
  end
  

  
  s.subspec 'AppInfo' do |sp|
    sp.vendored_frameworks = 'Frameworks/AppInfo/*.framework'
    sp.dependency 'EMSDK/Core'
  end
  
  s.subspec 'Scanner' do |sp|
    sp.vendored_frameworks = 'Frameworks/Scanner/*.framework'
    sp.dependency "LBXScan/LBXZXing"
    sp.dependency "LBXScan/UI"
    sp.resources = ["Frameworks/Scanner/*.bundle"]
    sp.dependency 'EMSDK/Core'
  end
  
  s.subspec 'FileTransfer' do |sp|
    sp.vendored_frameworks = 'Frameworks/FileTransfer/*.framework'
    sp.dependency 'EMSDK/Core'
  end
  

  s.subspec 'DocumentPreviewer' do |sp|
    sp.vendored_frameworks = 'Frameworks/DocumentPreviewer/*.framework'
    sp.dependency 'EMSDK/Core'
  end
  
  s.subspec 'Camera' do |sp|
    sp.vendored_frameworks = 'Frameworks/Camera/*.framework'
    sp.dependency 'EMSDK/Core'
  end

  s.subspec 'Modal' do |sp|
    sp.vendored_frameworks = 'Frameworks/Modal/*.framework'
    sp.dependency 'EMSDK/Core'
  end

  s.subspec 'VideoPreviewer' do |sp|
      sp.vendored_frameworks = 'Frameworks/VideoPreviewer/*.framework','Frameworks/VideoPreviewer/IJKPlayerSDK/*.framework'
      sp.resources = 'Frameworks/VideoPreviewer/IJKPlayerSDK/*.bundle'
      sp.dependency "Masonry"
      sp.libraries= 'z', 'c++','bz2.1.0'
      sp.dependency 'EMSDK/Core'
    end
  
  s.subspec 'All' do |sp|
    sp.dependency 'EMSDK/AppInfo'
    sp.dependency 'EMSDK/Scanner'
    sp.dependency 'EMSDK/FileTransfer'
    sp.dependency 'EMSDK/DocumentPreviewer'
    sp.dependency 'EMSDK/Camera'
#    sp.dependency 'EMSDK/Debug'
    sp.dependency 'EMSDK/Modal'
    sp.dependency 'EMSDK/VideoPreviewer'
  end
  
end


