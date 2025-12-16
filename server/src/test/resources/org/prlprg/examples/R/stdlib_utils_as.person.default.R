#? stdlib
`as.person.default` <- function (x) 
{
    if (inherits(x, "person")) 
        return(x)
    x <- trimws(as.character(x))
    if (!length(x)) 
        return(person())
    strings <- function(n, c = "z") {
        vapply(Map(rep.int, rep.int(c, length(n)), n, USE.NAMES = FALSE), 
            paste, "", collapse = "")
    }
    zify <- function(pattern, x) {
        if (!length(x)) 
            return(character())
        m <- gregexpr(pattern, x)
        regmatches(x, m) <- Map(strings, lapply(regmatches(x, 
            m), nchar))
        x
    }
    y <- zify("\\([^)]*\\)", x)
    y <- zify("\\[[^]]*\\]", y)
    y <- zify("<[^>]*>", y)
    pattern <- "[[:space:]]?(,|,?[[:space:]]and)[[:space:]]+"
    x <- do.call(c, regmatches(x, gregexpr(pattern, y), invert = TRUE))
    x <- x[!vapply(x, .is_not_nonempty_text, NA)]
    jr <- which(!is.na(match(x, c("Jr", "Jr.", "jr", "jr."))))
    if (length(jr)) {
        jr <- jr[jr > 1L]
        x[jr - 1L] <- paste(x[jr - 1L], x[jr], sep = ", ")
        x <- x[-jr]
    }
    if (!length(x)) 
        return(person())
    as_person1 <- function(x) {
        comment <- if (grepl("\\(.*\\)", x)) 
            sub(".*\\(([^)]*)\\).*", "\\1", x)
        else NULL
        if (!is.null(comment)) {
            chunks <- strsplit(comment, ", ", fixed = TRUE)[[1L]]
            if (any(i <- grepl(tools:::.ORCID_iD_variants_regexp, 
                chunks))) {
                chunks[i] <- tools:::.ORCID_iD_canonicalize(chunks[i])
                names(chunks)[i] <- "ORCID"
                comment <- chunks
            }
        }
        x <- sub("[[:space:]]*\\([^)]*\\)", "", x)
        email <- if (grepl("<.*>", x)) 
            unlist(strsplit(gsub("[[:space:]]*", "", sub(".*<([^>]*)>.*", 
                "\\1", x)), ",", fixed = TRUE))
        else NULL
        x <- sub("[[:space:]]*<[^>]*>", "", x)
        role <- if (grepl("\\[.*\\]", x)) 
            unlist(strsplit(gsub("[[:space:]]*", "", sub(".*\\[([^]]*)\\].*", 
                "\\1", x)), ",", fixed = TRUE))
        else NULL
        x <- sub("[[:space:]]*\\[[^)]*\\]", "", x)
        x <- unlist(strsplit(x, "[[:space:]]+"))
        jr <- c("Jr", "Jr.")
        von <- c("De", "Den", "Der", "La", "Le", "Ten", "Van", 
            "Von")
        family <- x[length(x)]
        given <- x[-length(x)]
        if (length(family) && !is.na(match(family, c(jr, tolower(jr))))) {
            family <- paste(given[length(given)], family)
            given <- given[-length(given)]
        }
        if ((ng <- length(given)) && !is.na(match(gng <- given[ng], 
            c(von, tolower(von))))) {
            family <- paste(gng, family)
            given <- given[-ng]
        }
        if ((ng <- length(given)) && !is.na(match(gng <- given[ng], 
            c(von, tolower(von))))) {
            family <- paste(gng, family)
            given <- given[-ng]
        }
        z <- person(given = given, family = family, email = email, 
            role = role, comment = comment)
        return(z)
    }
    as.list(do.call(c, lapply(x, as_person1)))
}
