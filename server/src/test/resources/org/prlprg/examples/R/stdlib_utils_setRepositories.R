#? stdlib
`setRepositories` <- function (graphics = getOption("menu.graphics"), ind = NULL, 
    addURLs = character(), name = NULL) 
{
    if (is.null(name) && is.null(ind) && !interactive()) 
        stop("cannot set repositories non-interactively")
    a <- .get_repositories()
    pkgType <- getOption("pkgType")
    if (!is.character(pkgType)) 
        stop("invalid options(\"pkgType\"); must be a character string")
    if (pkgType == "both") 
        pkgType <- "source"
    if (pkgType == "binary") 
        pkgType <- .Platform$pkgType
    if (startsWith(pkgType, "mac.binary")) 
        pkgType <- "mac.binary"
    thisType <- a[[pkgType]]
    a <- a[thisType, 1L:3L]
    repos <- getOption("repos")
    if ("CRAN" %in% row.names(a) && !is.na(CRAN <- repos["CRAN"])) 
        a["CRAN", "URL"] <- CRAN
    a[(a[["URL"]] %in% repos), "default"] <- TRUE
    new <- !(repos %in% a[["URL"]])
    if (any(new)) {
        aa <- names(repos[new])
        if (is.null(aa)) 
            aa <- rep.int("", length(repos[new]))
        aa[aa == ""] <- repos[new][aa == ""]
        newa <- data.frame(menu_name = aa, URL = repos[new], 
            default = TRUE)
        row.names(newa) <- aa
        a <- rbind(a, newa, deparse.level = 0L)
    }
    default <- a[["default"]]
    res <- if (length(name)) {
        m <- match(tolower(name), tolower(row.names(a)))
        if (any(is.na(m))) 
            stop("No matching repositories found for ", paste(name[is.na(m)], 
                collapse = ", "))
        m
    }
    else if (length(ind)) 
        as.integer(ind)
    else {
        title <- if (graphics) 
            "Repositories"
        else gettext("--- Please select repositories for use in this session ---\n")
        match(select.list(a[, 1L], a[default, 1L], multiple = TRUE, 
            title, graphics = graphics), a[, 1L])
    }
    if (length(res) || length(addURLs)) {
        repos <- a[["URL"]]
        names(repos) <- row.names(a)
        repos <- c(repos[res], addURLs)
        options(repos = repos)
    }
}

# Examples
oldrepos <- setRepositories(name = c("CRAN", "R-Forge"))
\donttest{getOption("repos")}
options(oldrepos) # restore

