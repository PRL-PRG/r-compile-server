package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.bc.StdlibClosuresSource;
import org.prlprg.fir2c.BC2Fir2CSnapshotTestExtension.BC2Fir2CSnapshot;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.util.gnur.GNUR;
import org.prlprg.util.gnur.GNURTestSupport;

@ExtendWith(BC2Fir2CSnapshotTestExtension.class)
@GNURTestSupport
public class BC2Fir2CCompileTest implements StdlibClosuresSource {
  private final GNUR R;

  public BC2Fir2CCompileTest(GNUR R) {
    this.R = R;
  }

  @Override
  public SEXP eval(String source) {
    return R.eval(source);
  }

  @Test
  public void testSimpleId() throws Exception {
    testInline(
        """
            f <- function(x) x
            """,
        """
            #include <runtime.h>

            SEXP Rsh_Fir_user_function_f(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
            SEXP Rsh_Fir_user_version_f_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);

            SEXP Rsh_Fir_user_function_f(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
              // FIR f dynamic dispatch ([x])
              return Rsh_Fir_user_version_f_v0(CCP, RHO, NPARAMS, PARAMS);
            }

            SEXP Rsh_Fir_user_version_f_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
              // FIR f version 0 (* -+> V)
              if (NPARAMS != 1) {
                Rsh_error("FIŘ arity mismatch for f/0: expected 1, got %d", NPARAMS);
              }

              // Bind parameters
              SEXP Rsh_Fir_reg_x = PARAMS[0];

              // mkenv
              Rsh_Fir_push_env(&RHO);
              (void)(R_NilValue);
              // st x = x
              Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_x, RHO);
              (void)(Rsh_Fir_reg_x);
              // x1 = ld x
              SEXP Rsh_Fir_reg_x1 = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
              // check L0() else D0()
              // L0().phis
              goto L0;

            D0:
              // deopt 0 [x1]
              SEXP Rsh_Fir_array_deopt_stack[1];
              Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1;
              Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
              return R_NilValue;

            L0:
              // x2 = force? x1
              SEXP Rsh_Fir_reg_x2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1);
              // checkMissing(x2)
              SEXP Rsh_Fir_array_args[1];
              Rsh_Fir_array_args[0] = Rsh_Fir_reg_x2;
              (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
              // popenv
              Rsh_Fir_pop_env(&RHO);
              (void)(R_NilValue);
              // return x2
              return Rsh_Fir_reg_x2;
            }
            """);
  }

  @Test
  public void testSimpleAdd() throws Exception {
    testInline(
        """
            f <- function(x) {
              x + 1
            }
            """,
        """
            #include <runtime.h>

            SEXP Rsh_Fir_user_function_f(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
            SEXP Rsh_Fir_user_version_f_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);

            SEXP Rsh_Fir_user_function_f(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
              // FIR f dynamic dispatch ([x])
              return Rsh_Fir_user_version_f_v0(CCP, RHO, NPARAMS, PARAMS);
            }

            SEXP Rsh_Fir_user_version_f_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
              // FIR f version 0 (* -+> V)
              if (NPARAMS != 1) {
                Rsh_error("FIŘ arity mismatch for f/0: expected 1, got %d", NPARAMS);
              }

              // Bind parameters
              SEXP Rsh_Fir_reg_x = PARAMS[0];

              // mkenv
              Rsh_Fir_push_env(&RHO);
              (void)(R_NilValue);
              // st x = x
              Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_x, RHO);
              (void)(Rsh_Fir_reg_x);
              // x1 = ld x
              SEXP Rsh_Fir_reg_x1 = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
              // check L0() else D0()
              // L0().phis
              goto L0;

            D0:
              // deopt 0 [x1]
              SEXP Rsh_Fir_array_deopt_stack[1];
              Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1;
              Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
              return R_NilValue;

            L0:
              // x2 = force? x1
              SEXP Rsh_Fir_reg_x2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1);
              // checkMissing(x2)
              SEXP Rsh_Fir_array_args[1];
              Rsh_Fir_array_args[0] = Rsh_Fir_reg_x2;
              (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
              // r = `+`(x2, 1.0)
              SEXP Rsh_Fir_array_args1[2];
              Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x2;
              Rsh_Fir_array_args1[1] = Rsh_const(CCP, 1);
              SEXP Rsh_Fir_reg_r = Rsh_Fir_builtin(CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
              // popenv
              Rsh_Fir_pop_env(&RHO);
              (void)(R_NilValue);
              // return r
              return Rsh_Fir_reg_r;
            }
            """);
  }

  @ParameterizedTest
  @MethodSource("stdlibFunctionNameSexpsAndCodes")
  public void snapshotTestStdlibFunctions(
      String name, CloSXP function, String functionCode, BC2Fir2CSnapshot snapshot) {
    var envOfFunction = new UserEnvSXP();
    envOfFunction.set(name, function);
    var envOfFunctionCode = name + " <- " + functionCode;

    snapshot.verify(name, envOfFunctionCode, envOfFunction);
  }

  private void testInline(@Language("R") String rInput, @Language("C++") String expectedCOutput) throws Exception {
    var rModuleEnv = R.evalEnvironment(rInput);
    var firModule = BC2Fir2CTestSupport.compileRModule(rModuleEnv, R.getSession());
    var compiled = BC2Fir2CTestSupport.compileToC(firModule, R.getSession());
    var actualCOutput = compiled.cModule().toString();

    var function = firstFunction(firModule);
    try (var artifact =
        BC2Fir2CTestSupport.buildSharedObject(
            firModule,
            compiled,
            function,
            function.name().name(),
            function.parameterNames().size())) {
      // Only compiled to ensure the generated source is valid C.
    }

    assertEquals(
        expectedCOutput.strip(),
        actualCOutput.strip(),
        "Produced C translation unit different from expected.");
  }

  private static Function firstFunction(Module firModule) {
    return firModule.localFunctions().stream()
        .findFirst()
        .orElseThrow(() -> new IllegalArgumentException("No functions compiled"));
  }
}
