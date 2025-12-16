#? stdlib
`Rd2txt_NEWS_in_Rd` <- function (f, out = "", outputEncoding = "UTF-8") 
{
    if (endsWith(f, ".rds")) 
        f <- readRDS(f)
    Rd2txt(f, out, stages = c("install", "render"), outputEncoding = outputEncoding, 
        options = Rd2txt_NEWS_in_Rd_options, macros = file.path(R.home("share"), 
            "Rd", "macros", "system.Rd"))
}
