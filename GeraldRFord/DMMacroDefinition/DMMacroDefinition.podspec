Pod::Spec.new do |s|
  s.name         = 'DMMacroDefinition'
  s.version      = '1.0.0'
  s.summary      = '拆分贷嘛工具类'
  s.homepage     = 'https://github.com/YRDGroup/DMMacroDefinition'
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { 'Agoer' => '10915819@qq.com' }
  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source       = {
      :git => 'https://github.com/YRDGroup/DMMacroDefinition.git',
      :tag => s.version.to_s
  }
  s.source_files = 'DMMacroDefinition/**/*.{c,h,m}'
end