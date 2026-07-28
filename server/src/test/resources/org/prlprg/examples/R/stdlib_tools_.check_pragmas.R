#? stdlib
`.check_pragmas` <- function (dir) 
{
    found <- warn <- port <- character()
    od <- setwd(dir)
    on.exit(setwd(od))
    ff <- dir(c("src", "inst/include"), pattern = "[.](c|cc|cpp|h|hh|hpp)$", 
        full.names = TRUE, recursive = TRUE)
    pat <- "^\\s*#pragma (GCC|clang) diagnostic ignored"
    pat2 <- "^\\s*#pragma (GCC|clang) diagnostic ignored[^-]*[-]W(uninitialized|float-equal|array-bound|format)"
    nonport <- c("abi-tag", "aggressive-loop-optimizations", 
        "aliasing", "align-commons", "aligned-new", "alloc-size-larger-than", 
        "alloc-zero", "alloca", "alloca-larger-than", "ampersand", 
        "argument-mismatch", "array-temporaries", "assign-intercept", 
        "attribute-alias", "bool-compare", "bool-operation", 
        "builtin-declaration-mismatch", "c-binding-type", "c90-c99-compat", 
        "c99-c11-compat", "cast-function-type", "catch-value", 
        "character-truncation", "chkp", "class-memaccess", "clobbered", 
        "compare-reals", "conditionally-supported", "conversion-extra", 
        "coverage-mismatch", "designated-init", "discarded-array-qualifiers", 
        "discarded-qualifiers", "do-subscript", "duplicated-branches", 
        "duplicated-cond", "format-contains-nul", "format-overflow", 
        "format-signedness", "format-truncation", "frame-address", 
        "frame-larger-than", "free-nonheap-object", "function-elimination", 
        "hsa", "if-not-aligned", "implicit-interface", "implicit-procedure", 
        "inherited-variadic-ctor", "int-in-bool-context", "integer-division", 
        "intrinsic-shadow", "intrinsics-std", "invalid-memory-model", 
        "jump-misses-init", "larger-than", "line-truncation", 
        "literal-suffix", "logical-op", "lto-type-mismatch", 
        "maybe-uninitialized", "memset-elt-size", "misleading-indentation", 
        "missing-attributes", "missing-parameter-type", "multiple-inheritance", 
        "multistatement-macros", "namespaces", "noexcept", "non-template-friend", 
        "nonnull-compare", "normalized", "old-style-declaration", 
        "openmp-simd", "override-init", "override-init-side-effects", 
        "packed-bitfield-compat", "packed-not-aligned", "placement-new", 
        "pmf-conversions", "pointer-compare", "property-assign-default", 
        "psabi", "real-q-constant", "realloc-lhs", "realloc-lhs-all", 
        "restrict", "return-local-addr", "scalar-storage-order", 
        "shadow-compatible-local", "shadow-local", "sized-deallocation", 
        "sizeof-pointer-div", "stack-usage", "strict-null-sentinel", 
        "stringop-overflow", "stringop-truncation", "subobject-linkage", 
        "suggest-attribute", "suggest-final-methods", "suggest-final-types", 
        "suggest-override", "surprising", "switch-unreachable", 
        "sync-nand", "tabs", "target-lifetime", "templates", 
        "terminate", "traditional", "traditional-conversion", 
        "trampolines", "undefined-do-loop", "underflow", "unsafe-loop-optimizations", 
        "unsuffixed-float-constants", "unused-but-set-parameter", 
        "unused-but-set-variable", "unused-dummy-argument", "use-without-only", 
        "useless-cast", "vector-operation-performance", "virtual-inheritance", 
        "virtual-move-assign", "vla-larger-than", "zerotrip")
    pat3 <- paste0("^\\s*#pragma (GCC|clang) diagnostic[^-]*[-]W(", 
        paste(nonport, collapse = "|"), ")")
    for (f in ff) {
        if (any(grepl(pat, readLines(f, warn = FALSE), perl = TRUE, 
            useBytes = TRUE))) 
            found <- c(found, f)
        else next
        if (any(grepl(pat2, readLines(f, warn = FALSE), perl = TRUE, 
            useBytes = TRUE))) 
            warn <- c(warn, f)
        if (any(grepl(pat3, readLines(f, warn = FALSE), perl = TRUE, 
            useBytes = TRUE))) 
            port <- c(port, f)
    }
    structure(found, class = "check_pragmas", warn = warn, port = port)
}
