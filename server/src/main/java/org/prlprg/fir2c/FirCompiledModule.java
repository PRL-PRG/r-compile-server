package org.prlprg.fir2c;

import java.util.Map;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.VectorSXP;

/**
 * Result of translating a FIŘ module.
 *
 * @param moduleUnit The rendered C translation unit.
 * @param compiledFunctions Map of FIŘ abstractions to the generated C function metadata.
 * @param constantPool Constant pool mirrored in the generated code, compatible with {@code
 *     Rsh_const}.
 */
public record FirCompiledModule(
    CModuleUnit moduleUnit,
    Map<Abstraction, FirCompiledVersion> compiledFunctions,
    VectorSXP<SEXP> constantPool) {

  /** Metadata describing the C entry point for a particular FIŘ function version. */
  public record FirCompiledVersion(Function function, int versionIndex, String cFunctionName) {}
}
