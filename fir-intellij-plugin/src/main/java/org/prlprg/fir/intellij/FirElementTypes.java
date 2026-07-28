package org.prlprg.fir.intellij;

import com.intellij.psi.tree.IElementType;

/** Composite AST element types for FIR structural constructs. */
public final class FirElementTypes {
  /** A function declaration: {@code fun name(params) { versions }} */
  public static final IElementType FUN_DECLARATION =
      new IElementType("FIR_FUN_DECLARATION", FirLanguage.INSTANCE);

  /** A function version: {@code (params) -fx> type { body }} */
  public static final IElementType VERSION =
      new IElementType("FIR_VERSION", FirLanguage.INSTANCE);

  /** A promise body: {@code { body }} (the brace-enclosed part of {@code prom<type fx>{ body }}) */
  public static final IElementType PROMISE_BODY =
      new IElementType("FIR_PROMISE_BODY", FirLanguage.INSTANCE);

  private FirElementTypes() {}
}
