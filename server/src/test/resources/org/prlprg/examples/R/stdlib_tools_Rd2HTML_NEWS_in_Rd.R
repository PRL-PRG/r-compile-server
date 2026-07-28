#? stdlib
`Rd2HTML_NEWS_in_Rd` <- function (f, out, ...) 
{
    if (endsWith(f, ".rds")) 
        f <- readRDS(f)
    Rd2HTML(f, out, stages = c("install", "render"), macros = file.path(R.home("share"), 
        "Rd", "macros", "system.Rd"), ...)
}
