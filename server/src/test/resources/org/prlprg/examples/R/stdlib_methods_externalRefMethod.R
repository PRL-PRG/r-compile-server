#? stdlib
`externalRefMethod` <- new("classGeneratorFunction", .Data = function (...) 
new("externalRefMethod", ...), className = structure("externalRefMethod", package = "methods"), 
    package = "methods")
