#? stdlib
`aspell_filter_LaTeX_commands_from_Aspell_tex_filter_info` <- function (dir) 
{
    x <- readLines(file.path(dir, "modules/filter/tex-filter.info"), 
        encoding = "UTF-8")
    x <- x[seq.int(which(x == "OPTION command"), length(x))]
    x <- x[seq.int(1L, which(x == "ENDOPTION")[1L])]
    substring(x[startsWith(x, "DEFAULT")], 9L)
}
