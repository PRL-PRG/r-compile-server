#? stdlib
`.pandoc_md_for_CRAN` <- function (ifile, ofile) 
{
    .system_with_capture("pandoc", paste(shQuote(normalizePath(ifile)), 
        "-s", "--mathjax", "--email-obfuscation=references", 
        "-o", shQuote(ofile)))
}
