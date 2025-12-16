#? stdlib
`.transform_S3_method_markup` <- function (x) 
{
    re <- sprintf("%s(<-)?", .S3_method_markup_regexp)
    .strip_backticks(sub(re, "\\3\\5.\\4", x))
}
