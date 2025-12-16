#? stdlib
`.transform_S4_method_markup` <- function (x) 
{
    re <- sprintf("%s(<-)?", .S4_method_markup_regexp)
    .strip_backticks(sub(re, "\\\\S4method{\\2\\7}{\\3}", x))
}
