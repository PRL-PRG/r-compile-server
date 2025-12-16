#? stdlib
`vignetteInfo` <- function (file) 
{
    lines <- readLines(file, warn = FALSE)
    lines[is.na(nchar(lines, "c", TRUE))] <- ""
    title <- c(.get_vignette_metadata(lines, "IndexEntry"), "")[1L]
    depends <- .get_vignette_metadata(lines, "Depends")
    if (length(depends)) 
        depends <- unlist(strsplit(depends[1L], ", *"))
    keywords <- .get_vignette_metadata(lines, "Keywords")
    keywords <- if (!length(keywords)) {
        .get_vignette_metadata(lines, "Keyword")
    }
    else unlist(strsplit(keywords[1L], ", *"))
    engine <- getVignetteEngine(lines = lines)
    list(file = basename(file), title = title, depends = depends, 
        keywords = keywords, engine = engine)
}

# Examples
  gridEx <- system.file("doc", "grid.Rnw", package = "grid")
  vi <- vignetteInfo(gridEx)
  str(vi)

