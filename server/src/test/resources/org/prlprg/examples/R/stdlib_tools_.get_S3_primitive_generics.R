#? stdlib
`.get_S3_primitive_generics` <- function (include_group_generics = TRUE) 
{
    if (include_group_generics) 
        c(base::.S3PrimitiveGenerics, "abs", "sign", "sqrt", 
            "floor", "ceiling", "trunc", "round", "signif", "exp", 
            "log", "expm1", "log1p", "cos", "sin", "tan", "cospi", 
            "sinpi", "tanpi", "acos", "asin", "atan", "cosh", 
            "sinh", "tanh", "acosh", "asinh", "atanh", "lgamma", 
            "gamma", "digamma", "trigamma", "cumsum", "cumprod", 
            "cummax", "cummin", "+", "-", "*", "/", "^", "%%", 
            "%/%", "&", "|", "!", "==", "!=", "<", "<=", ">=", 
            ">", "all", "any", "sum", "prod", "max", "min", "range", 
            "Arg", "Conj", "Im", "Mod", "Re", "%*%")
    else base::.S3PrimitiveGenerics
}
