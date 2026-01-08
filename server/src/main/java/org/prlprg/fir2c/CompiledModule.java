package org.prlprg.fir2c;

import com.google.common.collect.ImmutableMap;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.gen2c.*;

/// Result of translating a [FIŘ module][org.prlprg.fir.ir.module.Module].
public record CompiledModule(
    Module input,
    ImmutableMap<Function, CodeAndData> functions,
    ImmutableMap<Abstraction, CodeAndData> versions,
    ImmutableMap<Promise, CodeAndData> promises) {}
