Pod::Spec.new do |s|
s.name         = "Category-Lean"
s.version      = "2.0"
s.ios.deployment_target = '7.0'
s.summary      = "常用类目集合"
s.homepage     = "https://github.com/developer-chenlin/category.git"
s.license              = { :type => "MIT", :file => "LICENSE" }
s.author             = { "ChenLin" => "chenlinios@163.com" }
s.social_media_url   = "https://baidu.com"
s.source       = { :git => "https://github.com/developer-chenlin/category.git", :tag => s.version }
s.source_files  = 'Category/Class/*.{h,m}'

s.requires_arc = true


end
