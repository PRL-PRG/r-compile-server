package org.prlprg.examples;

import com.google.common.collect.ImmutableList;

/// A fragment of R source code, a call to `check`, which describes an example to be tested. The
/// first argument to `check` is either a function or code block, containing the code that will
/// be compiled and tested. The remaining arguments are options that affect specific tests.
public record RExample(
    String name,
    String code,
    ImmutableList<RExampleOption> options) {
}
