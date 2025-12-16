#? stdlib
`bibentry` <- function (bibtype, textVersion = NULL, header = NULL, footer = NULL, 
    key = NULL, ..., other = list(), mheader = NULL, mfooter = NULL) 
{
    BibTeX_names <- names(tools:::BibTeX_entry_field_db)
    args <- c(list(...), other)
    if (!length(args)) 
        return(.bibentry(list(), mheader, mfooter))
    if (any(vapply(names(args), .is_not_nonempty_text, NA))) 
        stop("all fields have to be named")
    args <- c(list(bibtype = bibtype, textVersion = textVersion, 
        header = header, footer = footer, key = key), list(...))
    args <- lapply(args, .listify)
    other <- lapply(other, .listify)
    max_length <- max(lengths(c(args, other)))
    args_length <- lengths(args)
    if (!all(args_length_ok <- args_length %in% c(1L, max_length))) 
        warning(gettextf("Not all arguments are of the same length, the following need to be recycled: %s", 
            paste(names(args)[!args_length_ok], collapse = ", ")), 
            domain = NA)
    args <- lapply(args, rep_len, max_length)
    other_length <- lengths(other)
    if (!all(other_length_ok <- other_length %in% c(1L, max_length))) 
        warning(gettextf("Not all arguments are of the same length, the following need to be recycled: %s", 
            paste(names(other)[!other_length_ok], collapse = ", ")), 
            domain = NA)
    other <- lapply(other, rep_len, max_length)
    bibentry1 <- function(bibtype, textVersion, header = NULL, 
        footer = NULL, key = NULL, ..., other = list()) {
        bibtype <- as.character(bibtype)
        stopifnot(length(bibtype) == 1L)
        pos <- match(tolower(bibtype), tolower(BibTeX_names))
        if (is.na(pos)) 
            stop(gettextf("%s has to be one of %s", sQuote("bibtype"), 
                paste(BibTeX_names, collapse = ", ")), domain = NA)
        bibtype <- BibTeX_names[pos]
        rval <- c(list(...), other)
        rval <- rval[!vapply(rval, .is_not_nonempty_text, NA)]
        fields <- tolower(names(rval))
        names(rval) <- fields
        attr(rval, "bibtype") <- bibtype
        .bibentry_check_bibentry1(rval)
        pos <- fields %in% c("author", "editor")
        if (any(pos)) {
            for (i in which(pos)) rval[[i]] <- as.person(rval[[i]])
        }
        if (any(!pos)) {
            for (i in which(!pos)) {
                s <- trimws(as.character(rval[[i]]))
                rval[[i]] <- paste(s[!is.na(s) & nzchar(s)], 
                  collapse = " ")
            }
        }
        attr(rval, "key") <- if (is.null(key)) 
            NULL
        else as.character(key)
        if (!is.null(textVersion)) 
            attr(rval, "textVersion") <- as.character(textVersion)
        if (!.is_not_nonempty_text(header)) 
            attr(rval, "header") <- paste(header, collapse = "\n")
        if (!.is_not_nonempty_text(footer)) 
            attr(rval, "footer") <- paste(footer, collapse = "\n")
        return(rval)
    }
    rval <- lapply(seq_along(args$bibtype), function(i) do.call(bibentry1, 
        c(lapply(args, `[[`, i), list(other = lapply(other, `[[`, 
            i)))))
    .bibentry(rval, mheader, mfooter)
}

# Examples
## R reference
rref <- bibentry(
   bibtype = "Manual",
   title = "R: A Language and Environment for Statistical Computing",
   author = person("R Core Team"),
   organization = "R Foundation for Statistical Computing",
   address = "Vienna, Austria",
   year = 2014,
   url = "https://www.R-project.org/")

## Different printing styles
print(rref)
print(rref, style = "bibtex")
print(rref, style = "citation")
print(rref, style = "html")
print(rref, style = "latex")
print(rref, style = "R")

## References for boot package and associated book
bref <- c(
   bibentry(
     bibtype = "Manual",
     title = "boot: Bootstrap R (S-PLUS) Functions",
     author = c(
       person("Angelo", "Canty", role = "aut",
         comment = "S original"),
       person(c("Brian", "D."), "Ripley", role = c("aut", "trl", "cre"),
         comment = "R port, author of parallel support",
         email = "ripley@stats.ox.ac.uk")
     ),
     year = "2012",
     note = "R package version 1.3-4",
     url = "https://CRAN.R-project.org/package=boot",
     key = "boot-package"
   ),

   bibentry(
     bibtype = "Book",
     title = "Bootstrap Methods and Their Applications",
     author = as.person("Anthony C. Davison [aut], David V. Hinkley [aut]"),
     year = "1997",
     publisher = "Cambridge University Press",
     address = "Cambridge",
     isbn = "0-521-57391-2",
     url = "http://statwww.epfl.ch/davison/BMA/",
     key = "boot-book"
   )
)

## Combining and subsetting
c(rref, bref)
bref[2]
bref["boot-book"]

## Extracting fields
bref$author
bref[1]$author
bref[1]$author[2]$email

## Field names are case-insensitive
rref$Year
rref$Year <- R.version$year
stopifnot(identical(rref$year, R.version$year))

## Convert to BibTeX
toBibtex(bref)

## Transform
transform(rref, address = paste0(address, ", Europe"))

## BibTeX reminder message (in case of >= 2 refs):
print(bref, style = "citation")

## Format in R style
## One bibentry() call for each bibentry:
writeLines(paste(format(bref, "R"), collapse = "\n\n"))
## One collapsed call:
writeLines(format(bref, "R", collapse = TRUE))

