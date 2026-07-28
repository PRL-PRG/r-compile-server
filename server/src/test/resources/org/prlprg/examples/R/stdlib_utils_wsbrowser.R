#? stdlib
`wsbrowser` <- function (IDS, IsRoot, IsContainer, ItemsPerContainer, ParentID, 
    NAMES, TYPES, DIMS, expanded = TRUE, kind = "HTML", main = "R Workspace", 
    properties = list(), browser = getOption("browser")) 
{
    if (kind != "HTML") 
        stop(gettextf("kind '%s' not yet implemented", kind), 
            domain = NA)
    bold <- function(ch) paste0("<b>", ch, "</b>")
    ital <- function(ch) paste0("<i>", ch, "</i>")
    entry <- function(ch) paste0("<td>", ch, "</td>")
    Par <- function(ch) paste0("<P>", ch, "</P>")
    Trow <- function(N, ...) {
        if (length(list(...)) != N) 
            stop("wrong number of table row entries")
        paste("<tr>", ..., "</tr>\n")
    }
    catRow <- function(...) cat(Trow(nCol, ...), file = Hfile)
    RootItems <- which(IsRoot)
    NumOfRoots <- length(RootItems)
    props <- properties
    if (length(props)) {
        nms <- names(props)
        nms <- unlist(lapply(unlist(lapply(paste0(nms, ":"), 
            bold)), entry))
        props <- unlist(lapply(props, entry))
        props <- paste("<table border=2>", paste(Trow(1, paste(nms, 
            props)), collapse = ""), "</table>", sep = "\n")
    }
    fname <- file.path(tempdir(), "wsbrowser.html")
    Hfile <- file(fname, "w")
    cat("<html>\n<title>", main, "browser</title>\n<body>", "<H1>", 
        main, "</H1>\n", if (is.character(props)) 
            Par(props), "<table border=1>\n", file = Hfile)
    nCol <- if (expanded) 
        4L
    else 3L
    catRow(entry(bold("Object")), if (expanded) 
        entry(bold(ital("(components)"))), entry(bold("Type")), 
        entry(bold("Property")))
    for (i in seq_len(NumOfRoots)) {
        iid <- RootItems[i]
        catRow(entry(NAMES[iid]), if (expanded) 
            entry(""), entry(ital(TYPES[iid])), entry(DIMS[iid]))
        if (IsContainer[i] && expanded) {
            items <- which(ParentID == i)
            for (j in seq_len(ItemsPerContainer[i])) {
                id <- IDS[items[j]]
                catRow(entry(""), entry(NAMES[id]), entry(ital(TYPES[id])), 
                  entry(DIMS[id]))
            }
        }
    }
    cat("</table>\n</body></html>", file = Hfile)
    close(Hfile)
    switch(.Platform$OS.type, windows = , unix = {
        url <- fname
    }, )
    if (!startsWith(url, "/")) 
        url <- paste0("/", url)
    url <- paste0("file://", URLencode(url))
    browseURL(url = url, browser = browser)
    cat(main, "environment is shown in browser", if (is.character(browser)) 
        sQuote(browser), "\n")
    invisible(fname)
}
