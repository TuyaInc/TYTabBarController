Pod::Spec.new do |s|
  s.name             = 'TYTabBarController'

  s.version          = '1.1.0'

  s.summary          = 'Tab Controller Powered By Tuya'
  s.homepage         = 'https://github.com/TuyaInc/TYTabBarController.git'
  s.license          = 'None'
  s.author           = { 'TuyaInc' => 'https://www.tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYTabBarController.git', :tag => s.version.to_s }


  s.ios.deployment_target = '9.0'

  s.source_files = 'TYTabBarController/Headers/**/*'
  s.vendored_library = 'TYTabBarController/*.a'

  s.dependency 'TYModuleManager'
  
  end
