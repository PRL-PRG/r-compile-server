#? stdlib
`.build_links_index` <- function (contents, package) 
{
    if (length(contents)) {
        aliases <- contents$Aliases
        lens <- lengths(aliases)
        files <- sub("\\.[Rr]d$", "\\.html", contents$File)
        structure(file.path("../..", package, "html", rep.int(files, 
            lens)), names = unlist(aliases))
    }
    else character()
}
