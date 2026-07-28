#? stdlib
`.make_file_exts` <- function (type = c("code", "data", "demo", "docs", "vignette")) 
{
    switch(type, code = c("R", "r", "S", "s", "q"), data = c("R", 
        "r", "RData", "rdata", "rda", "tab", "txt", "TXT", "tab.gz", 
        "txt.gz", "tab.bz2", "txt.bz2", "tab.xz", "txt.xz", "csv", 
        "CSV", "csv.gz", "csv.bz2", "csv.xz"), demo = c("R", 
        "r"), docs = c("Rd", "rd"), vignette = c(outer(c("R", 
        "r", "S", "s"), c("nw", "tex"), paste0), "Rmd"))
}
