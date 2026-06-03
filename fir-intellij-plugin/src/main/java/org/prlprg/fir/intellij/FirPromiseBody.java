package org.prlprg.fir.intellij;

import com.intellij.extapi.psi.ASTWrapperPsiElement;
import com.intellij.lang.ASTNode;
import org.jetbrains.annotations.NotNull;

/** PSI element for a FIR promise body ({@code { body }} within {@code prom<type fx>{ body }}). */
public final class FirPromiseBody extends ASTWrapperPsiElement {

  public FirPromiseBody(@NotNull ASTNode node) {
    super(node);
  }
}
