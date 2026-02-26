package org.prlprg.fir.intellij;

import com.intellij.lang.ASTNode;
import com.intellij.lang.PsiBuilder;
import com.intellij.lang.PsiParser;
import com.intellij.psi.tree.IElementType;
import org.jetbrains.annotations.NotNull;

public final class FirParser implements PsiParser {
  @Override
  public @NotNull ASTNode parse(@NotNull IElementType root, @NotNull PsiBuilder builder) {
    var rootMarker = builder.mark();
    while (!builder.eof()) {
      builder.advanceLexer();
    }
    rootMarker.done(root);
    return builder.getTreeBuilt();
  }
}
