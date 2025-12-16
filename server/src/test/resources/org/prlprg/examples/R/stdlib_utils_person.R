#? stdlib
`person` <- function (given = NULL, family = NULL, middle = NULL, email = NULL, 
    role = NULL, comment = NULL, first = NULL, last = NULL) 
{
    args <- list(given = given, family = family, middle = middle, 
        email = email, role = role, comment = comment, first = first, 
        last = last)
    if (all(vapply(args, is.null, NA))) 
        return(.person())
    args <- lapply(args, .listify)
    args_length <- lengths(args)
    if (!all(args_length_ok <- args_length %in% c(1L, max(args_length)))) 
        warning(gettextf("Not all arguments are of the same length, the following need to be recycled: %s", 
            paste(names(args)[!args_length_ok], collapse = ", ")), 
            domain = NA)
    args <- lapply(args, rep_len, max(args_length))
    person1 <- function(given = NULL, family = NULL, middle = NULL, 
        email = NULL, role = NULL, comment = NULL, first = NULL, 
        last = NULL) {
        if (!.is_not_nonempty_text(first)) {
            if (!.is_not_nonempty_text(given)) 
                stop(gettextf("Use either %s or %s/%s but not both.", 
                  sQuote("given"), sQuote("first"), sQuote("middle")), 
                  domain = NA)
            warning(gettextf("It is recommended to use %s instead of %s.", 
                sQuote("given"), sQuote("first")), domain = NA)
            given <- first
        }
        if (!.is_not_nonempty_text(middle)) {
            warning(gettextf("It is recommended to use %s instead of %s.", 
                sQuote("given"), sQuote("middle")), domain = NA)
            given <- c(given, unlist(strsplit(middle, "[[:space:]]+")))
        }
        if (!.is_not_nonempty_text(last)) {
            if (!.is_not_nonempty_text(family)) 
                stop(gettextf("Use either %s or %s but not both.", 
                  sQuote("family"), sQuote("last")), domain = NA)
            warning(gettextf("It is recommended to use %s instead of %s.", 
                sQuote("family"), sQuote("last")), domain = NA)
            family <- last
        }
        .canonicalize <- function(s) {
            if (.is_not_nonempty_text(s)) 
                NULL
            else {
                if (!is.character(s)) 
                  warning(gettextf("Arguments of person() should be character or NULL"), 
                    domain = NA)
                trimws(s)
            }
        }
        given <- .canonicalize(given)
        family <- .canonicalize(family)
        email <- .canonicalize(email)
        if (.is_not_nonempty_text(role) && !is.null(role)) 
            warning(sprintf(ngettext(length(role), "Invalid role specification: %s.", 
                "Invalid role specifications: %s."), paste(sQuote(role), 
                collapse = ", ")), domain = NA)
        role <- .canonicalize(role)
        comment <- .canonicalize(comment)
        if (length(role)) 
            role <- .canonicalize_person_role(role)
        if (length(comment)) {
            ind <- grepl(sprintf("^https?://orcid.org/%s$", tools:::.ORCID_iD_regexp), 
                comment)
            if (any(ind)) {
                if (is.null(names(comment))) 
                  names(comment) <- ifelse(ind, "ORCID", "")
                else names(comment)[ind] <- "ORCID"
            }
        }
        rval <- list(given = given, family = family, role = role, 
            email = email, comment = comment)
        if (any(ind <- (lengths(rval) == 0L))) 
            rval[ind] <- vector("list", length = sum(ind))
        if (all(vapply(rval, is.null, NA))) 
            NULL
        else rval
    }
    force(person1)
    rval <- lapply(seq_along(args$given), function(i) with(args, 
        person1(given = given[[i]], family = family[[i]], middle = middle[[i]], 
            email = email[[i]], role = role[[i]], comment = comment[[i]], 
            first = first[[i]], last = last[[i]])))
    .person(rval[!vapply(rval, is.null, NA)])
}

# Examples
## Create a person object directly ...
p1 <- person("Karl", "Pearson", email = "pearson@stats.heaven")

## ... or convert a string.
p2 <- as.person("Ronald Aylmer Fisher")

## Combining and subsetting.
p <- c(p1, p2)
p[1]
p[-1]

## Extracting fields.
p$family
p$email
p[1]$email

## Specifying package authors, example from "boot":
## AC is the first author [aut] who wrote the S original.
## BR is the second author [aut], who translated the code to R [trl],
## and maintains the package [cre].
b <- c(person("Angelo", "Canty", role = "aut", comment =
         "S original, <http://statwww.epfl.ch/davison/BMA/library.html>"),
       person(c("Brian", "D."), "Ripley", role = c("aut", "trl", "cre"),
              comment = "R port", email = "ripley@stats.ox.ac.uk")
     )
b

## Formatting.
format(b)
format(b, include = c("family", "given", "role"),
   braces = list(family = c("", ","), role = c("(Role(s): ", ")")))

## Conversion to BibTeX author field.
paste(format(b, include = c("given", "family")), collapse = " and ")
toBibtex(b)

## ORCID identifiers.
(p3 <- person("Achim", "Zeileis",
              comment = c(ORCID = "0000-0003-0918-3766")))

