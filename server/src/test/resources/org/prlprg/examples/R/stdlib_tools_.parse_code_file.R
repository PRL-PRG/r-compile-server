#? stdlib
`.parse_code_file` <- function (file, encoding = NA, keep.source = getOption("keep.source")) 
{
    if (!file.size(file)) 
        return()
    suppressWarnings({
        if (!is.na(encoding) && (encoding != "unknown") && (Sys.getlocale("LC_CTYPE") %notin% 
            c("C", "POSIX"))) {
            lines <- iconv(readLines(file, warn = FALSE), from = encoding, 
                to = "", sub = "byte")
            parse(text = lines, srcfile = srcfile(file), keep.source = keep.source)
        }
        else parse(file, keep.source = keep.source)
    })
}
