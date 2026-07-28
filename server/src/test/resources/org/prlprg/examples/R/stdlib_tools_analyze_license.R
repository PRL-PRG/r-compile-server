#? stdlib
`analyze_license` <- function (x) 
{
    .make_results <- function(is_empty = FALSE, is_canonical = FALSE, 
        bad_components = character(), is_standardizable = FALSE, 
        is_verified = FALSE, standardization = NA_character_, 
        components = NULL, expansions = NULL, extensions = NULL, 
        pointers = NULL, is_FOSS = NA, restricts_use = NA) list(is_empty = is_empty, 
        is_canonical = is_canonical, bad_components = bad_components, 
        is_standardizable = is_standardizable, is_verified = is_verified, 
        standardization = standardization, components = components, 
        expansions = expansions, extensions = extensions, pointers = pointers, 
        is_FOSS = is_FOSS, restricts_use = restricts_use)
    x <- trimws(x)
    if (is.na(x) || (x == "")) {
        return(.make_results(is_empty = TRUE))
    }
    pointers <- NULL
    extensions <- NULL
    expansions <- NULL
    is_verified <- FALSE
    is_FOSS <- NA
    restricts_use <- NA
    components <- trimws(unlist(strsplit(gsub("[[:space:]]*\\+[[:space:]]*", 
        " + ", x), "|", fixed = TRUE)))
    ok <- grepl(R_license_db_vars()$re_component, components)
    bad_components <- components[!ok]
    is_canonical <- all(ok)
    standardizable <- components %in% .standardizable_license_specs_db$ispecs
    is_standardizable <- (is_canonical || all(standardizable))
    standardization <- if (is_standardizable) {
        ind <- !ok & standardizable
        if (any(ind)) 
            components[ind] <- .standardize_license_components(components[ind])
        ind <- ok & grepl("\\(", components)
        if (any(ind)) {
            s <- sub("[[:space:]]*\\([[:space:]]*", " \\(", components[ind])
            s <- sub("[[:space:]]*\\)", "\\)", s)
            s <- gsub("[[:space:]]*,[[:space:]]*", ", ", s)
            s <- gsub("[[:space:]]+(<=?|>=?|==|!=)", " \\1", 
                s)
            components[ind] <- gsub(sprintf("[[:space:]]*(%s)", 
                .standard_regexps()$valid_numeric_version), " \\1", 
                s)
        }
        paste(components, collapse = " | ")
    }
    else NA_character_
    if (is_standardizable) {
        verifiable <- function(x, v = "yes") !is.null(x) && all(!is.na(x) & 
            (x == v))
        expansions <- lapply(components, expand_license_spec_component_from_db)
        is_FOSS <- if (any(components == "Unlimited")) {
            TRUE
        }
        else if (any(vapply(expansions, function(e) verifiable(e$FOSS), 
            NA))) {
            TRUE
        }
        else if (all(vapply(expansions, function(e) any(e$FOSS == 
            "no"), NA))) {
            FALSE
        }
        else NA
        is_verified <- !is.na(is_FOSS) && is_FOSS
        restricts_use <- if (is_verified) {
            FALSE
        }
        else if (any(vapply(expansions, function(e) (length(e) && 
            all(e$Restricts_use == "no")), NA))) {
            FALSE
        }
        else if (all(vapply(expansions, function(e) any(e$Restricts_use == 
            "yes"), NA))) {
            TRUE
        }
        else NA
        re <- R_license_db_vars()$re_license_file
        pos <- grep(sprintf("%s$", re), components)
        if (length(pos)) {
            elements <- components[pos]
            pointers <- sub(".*file ", "", elements)
            ind <- grepl("+", elements, fixed = TRUE)
            if (any(ind)) 
                extensions <- data.frame(components = elements[ind], 
                  extensible = vapply(expansions[pos[ind]], function(e) verifiable(e$Extensible), 
                    NA), stringsAsFactors = FALSE)
        }
        expansions <- lapply(expansions, `[[`, "Labels")
        ind <- grepl(sprintf("^(Unlimited|%s)$", re), components)
        if (any(ind)) 
            expansions[ind] <- as.list(components[ind])
        m <- regexpr(sprintf("\\+ *%s$", re), components)
        ind <- (m > -1L)
        expansions[ind] <- Map(paste, expansions[ind], regmatches(components, 
            m))
    }
    if (any(startsWith(components, "Part of R"))) {
        is_verified <- is_FOSS <- TRUE
        restricts_use <- FALSE
    }
    .make_results(is_canonical = is_canonical, bad_components = bad_components, 
        is_standardizable = is_standardizable, standardization = standardization, 
        is_verified = is_verified, components = components, expansions = expansions, 
        extensions = extensions, pointers = pointers, is_FOSS = is_FOSS, 
        restricts_use = restricts_use)
}
