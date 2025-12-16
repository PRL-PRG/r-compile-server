#? stdlib
`dependsOnPkgs` <- function (pkgs, dependencies = "strong", recursive = TRUE, lib.loc = NULL, 
    installed = utils::installed.packages(lib.loc, fields = "Enhances")) 
{
    dependencies <- .expand_dependency_type_spec(dependencies)
    av <- installed[, dependencies, drop = FALSE]
    rn <- as.character(installed[, "Package"])
    need <- apply(av, 1L, function(x) any(pkgs %in% utils:::.clean_up_dependencies(x)))
    uses <- rn[need]
    if (recursive) {
        p <- pkgs
        repeat {
            p <- unique(c(p, uses))
            need <- apply(av, 1L, function(x) any(p %in% utils:::.clean_up_dependencies(x)))
            uses <- unique(c(p, rn[need]))
            if (length(uses) <= length(p)) 
                break
        }
    }
    setdiff(uses, pkgs)
}

# Examples\donttest{

## there are few dependencies in a vanilla R installation:
## lattice may not be installed
dependsOnPkgs("lattice")
}
