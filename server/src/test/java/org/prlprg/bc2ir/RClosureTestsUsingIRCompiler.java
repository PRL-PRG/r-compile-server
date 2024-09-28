package org.prlprg.bc2ir;

//public abstract class RClosureTestsUsingIRCompiler extends RClosureTestsUsingBytecodeCompiler {
//
//  @ParameterizedTest
//  @MethodSource("stdlibFunctionsList")
//  @Override
//  public void stdlibFunctions(String reference) {
//    var components = reference.split(":::");
//    assert components.length == 2;
//    var name = components[0] + "." + Names.unquoteIfNecessary(components[1]);
//
//    testClosure(name, reference, 2);
//  }
//
//  /** {@link #testClosure(String, String, int)} with the closure's name set to the caller's name. */
//  @Override
//  protected void testClosure(String funCode, int optimizationLevel) {
//    // https://stackoverflow.com/a/68674306
//    var callerName =
//        StackWalker.getInstance()
//            .walk(
//                stream ->
//                    stream
//                        .filter(m -> !m.getMethodName().equals("testAllIr"))
//                        .findFirst()
//                        .orElseThrow())
//            .getMethodName();
//
//    testClosure(callerName, funCode, optimizationLevel);
//  }
//
//  /**
//   * Test generating the {@link Closure} IR, re-parsing, and verifying.
//   *
//   * <p>Maybe we want to separate, so some things are only generated, and we also load pre-generated
//   * IR to run (in order to load pre-generated code, first we have to finalize the IR serialized
//   * representation).
//   */
//  private void testClosure(String funName, String funCode, int optimizationLevel) {
//    // Test compile
//    var fun = compileSuccessfully(funCode, optimizationLevel);
//    Closure ir;
//
//    try {
//      ir = ClosureCompiler.compileBaselineClosure(funName, fun);
//    } catch (ClosureCompilerUnsupportedException e) {
//      assumeNoException("Can't compile IR due to unsupported bytecode feature", e);
//      throw new UnreachableError();
//    } catch (Throwable e) {
//      onIRGenerationFailure(e);
//      return;
//    }
//
//    testClosure(ir);
//  }
//
//  /**
//   * Called when a {@link Closure} fails to generate.
//   *
//   * <p>{@link IRCompilerTests} re-throws the exception. Other tests abort (the default), because
//   * they aren't testing the IR generation, they're testing the IR itself.
//   */
//  protected void onIRGenerationFailure(Throwable e) {
//    assumeNoException("Failed to generate IR", e);
//  }
//
//  /** Test the generated {@link Closure}. */
//  protected abstract void testClosure(Closure ir);
//
//  /**
//   * Parse the closure and then compile it with a bytecode body.
//   *
//   * <p>"Successfully" = we want to make sure that any reported failure is on the ir end. So, we
//   * compare our bytecode compiler against GNU-R, and if they don't match (or any other error occurs
//   * within this function), we abort the test.
//   *
//   * <p>In the future if this is too slow, we can memoize it across runs: save the RDS of a closure
//   * compiled from the first run, and load it on subsequent runs (maybe under a flag or something
//   * automatic to detect when we must clear the cache).
//   */
//  private CloSXP compileSuccessfully(String funCode, int optimizationLevel) {
//    CloSXP fun;
//    try {
//      fun = assertBytecode(funCode, optimizationLevel);
//    } catch (Throwable e) {
//      assumeNoException("Failed to get compiled GNU-R bytecode, so we can't test IR", e);
//      throw new UnreachableError();
//    }
//    if (!(fun.body() instanceof BCodeSXP)) {
//      abort(
//          "Failed to get compiled GNU-R bytecode, so we can't test the IR: Java compiler returned NULL, so it probably contains the browser function.");
//    }
//    return fun;
//  }
//
//  @Override
//  protected double stdlibTestsRatio() {
//    return FAST_TESTS ? 0.1 : 1;
//  }
//}
