package org.prlprg.fir.intellij;

import com.intellij.lang.ASTNode;
import com.intellij.lang.folding.FoldingBuilderEx;
import com.intellij.lang.folding.FoldingDescriptor;
import com.intellij.openapi.editor.Document;
import com.intellij.openapi.util.TextRange;
import com.intellij.psi.PsiElement;
import com.intellij.psi.util.PsiTreeUtil;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

public final class FirFoldingBuilder extends FoldingBuilderEx {
  @Override
  public FoldingDescriptor @NotNull [] buildFoldRegions(
      @NotNull PsiElement root, @NotNull Document document, boolean quick) {
    var descriptors = new ArrayList<FoldingDescriptor>();

    for (var fun : PsiTreeUtil.findChildrenOfType(root, FirFunDeclaration.class)) {
      addBraceFold(fun, descriptors);
    }
    for (var ver : PsiTreeUtil.findChildrenOfType(root, FirVersion.class)) {
      addBraceFold(ver, descriptors);
    }
    for (var prom : PsiTreeUtil.findChildrenOfType(root, FirPromiseBody.class)) {
      var range = prom.getTextRange();
      if (range.getLength() > 1) {
        descriptors.add(new FoldingDescriptor(prom.getNode(), range));
      }
    }

    for (var range : sexpFoldRanges(document.getCharsSequence())) {
      var node = root.getNode().findLeafElementAt(range.getStartOffset());
      if (node != null) {
        descriptors.add(new FoldingDescriptor(node, range, null, " ...", true, Set.of()));
      }
    }

    return descriptors.toArray(FoldingDescriptor.EMPTY_ARRAY);
  }

  /**
   * The fold of each multi-line SEXP literal: from after the type word of its `<` to before its
   * `>`, so that a folded `<lang f(\n...)>` reads `<lang ...>`.
   */
  static List<TextRange> sexpFoldRanges(CharSequence text) {
    var ranges = new ArrayList<TextRange>();
    var lexer = new FirLexer();
    for (lexer.start(text); lexer.getTokenType() != null; lexer.advance()) {
      var start = lexer.getTokenStart() + 1;
      var end = lexer.getTokenEnd() - 1;
      if (lexer.getTokenType() != FirTokenTypes.SEXP
          || text.charAt(end) != '>'
          || text.subSequence(start, end).toString().indexOf('\n') < 0) {
        continue;
      }
      while (Character.isLetter(text.charAt(start))) start++;
      ranges.add(new TextRange(start, end));
    }
    return ranges;
  }

  private static void addBraceFold(
      PsiElement element, ArrayList<FoldingDescriptor> descriptors) {
    var text = element.getText();
    var offset = element.getTextRange().getStartOffset();
    var firstBrace = text.indexOf('{');
    var lastBrace = text.lastIndexOf('}');
    if (firstBrace >= 0 && lastBrace > firstBrace) {
      var range = new TextRange(offset + firstBrace, offset + lastBrace + 1);
      descriptors.add(new FoldingDescriptor(element.getNode(), range));
    }
  }

  @Override
  public @Nullable String getPlaceholderText(@NotNull ASTNode node) {
    return "{...}";
  }

  @Override
  public boolean isCollapsedByDefault(@NotNull ASTNode node) {
    return false;
  }
}
