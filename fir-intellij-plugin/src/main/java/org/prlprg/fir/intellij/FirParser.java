package org.prlprg.fir.intellij;

import com.intellij.lang.ASTNode;
import com.intellij.lang.PsiBuilder;
import com.intellij.lang.PsiParser;
import com.intellij.psi.tree.IElementType;
import org.jetbrains.annotations.NotNull;

/**
 * Parser for FIR files that builds an AST with structural nodes for function declarations, versions,
 * and promise bodies.
 *
 * <p>The resulting tree structure is:
 * <pre>
 * FILE
 *   FUN_DECLARATION       "fun name(params) { ... }"
 *     VERSION              "(params) -fx> type { body }"
 *       PROMISE_BODY       "{ body }"  (inside prom<type fx>{ body })
 *     VERSION              ...
 *   FUN_DECLARATION       ...
 * </pre>
 */
public final class FirParser implements PsiParser {
  @Override
  public @NotNull ASTNode parse(@NotNull IElementType root, @NotNull PsiBuilder builder) {
    var rootMarker = builder.mark();
    while (!builder.eof()) {
      if (isToken(builder, FirTokenTypes.KEYWORD, "fun")) {
        parseFunDeclaration(builder);
      } else {
        builder.advanceLexer();
      }
    }
    rootMarker.done(root);
    return builder.getTreeBuilt();
  }

  private static void parseFunDeclaration(PsiBuilder builder) {
    var marker = builder.mark();
    builder.advanceLexer(); // consume "fun"

    // Skip past "name(params)" to the function body opening "{"
    var parenDepth = 0;
    while (!builder.eof()) {
      if (isToken(builder, FirTokenTypes.PAREN, "(")) {
        parenDepth++;
      } else if (isToken(builder, FirTokenTypes.PAREN, ")")) {
        parenDepth--;
      } else if (parenDepth == 0 && isToken(builder, FirTokenTypes.BRACE, "{")) {
        break;
      }
      builder.advanceLexer();
    }

    if (builder.eof()) {
      marker.done(FirElementTypes.FUN_DECLARATION);
      return;
    }
    builder.advanceLexer(); // consume "{"

    // Inside function body: look for versions at brace depth 1
    var braceDepth = 1;
    while (!builder.eof() && braceDepth > 0) {
      // At the top level of the function body, "(" starts a version
      if (braceDepth == 1 && isToken(builder, FirTokenTypes.PAREN, "(")) {
        var versionMarker = builder.mark();
        if (tryConsumeVersion(builder)) {
          versionMarker.done(FirElementTypes.VERSION);
          continue;
        }
        versionMarker.rollbackTo();
      }

      // Track brace depth
      if (isToken(builder, FirTokenTypes.BRACE, "{")) {
        braceDepth++;
      } else if (isToken(builder, FirTokenTypes.BRACE, "}")) {
        braceDepth--;
      }
      builder.advanceLexer();
    }

    marker.done(FirElementTypes.FUN_DECLARATION);
  }

  /**
   * Tries to consume a version starting from "(". Returns true if a version was successfully
   * consumed (the builder is now past the version's closing "}"). Returns false if this isn't a
   * version (the caller should rollback).
   */
  private static boolean tryConsumeVersion(PsiBuilder builder) {
    // Consume "(params)"
    var parenDepth = 0;
    while (!builder.eof()) {
      if (isToken(builder, FirTokenTypes.PAREN, "(")) parenDepth++;
      else if (isToken(builder, FirTokenTypes.PAREN, ")")) parenDepth--;
      builder.advanceLexer();
      if (parenDepth == 0) break;
    }

    // A version arrow must follow the parameter list
    if (builder.eof() || builder.getTokenType() != FirTokenTypes.ARROW) {
      return false;
    }

    // Confirmed version - consume arrow and return type until body "{"
    while (!builder.eof() && !isToken(builder, FirTokenTypes.BRACE, "{")) {
      builder.advanceLexer();
    }
    if (builder.eof()) return true;
    builder.advanceLexer(); // consume "{"

    // Consume the version body, detecting promise bodies inside
    consumeBody(builder);
    return true;
  }

  /**
   * Consumes a brace-enclosed body (version or promise), starting after the opening "{".
   * Detects and marks {@code prom<...>{ body }} promise bodies within.
   */
  private static void consumeBody(PsiBuilder builder) {
    var braceDepth = 1;
    while (!builder.eof() && braceDepth > 0) {
      // Detect "prom" keyword -> the next "{" starts a promise body
      if (isToken(builder, FirTokenTypes.KEYWORD, "prom")) {
        builder.advanceLexer(); // consume "prom"
        // Skip to the promise body's opening "{"
        while (!builder.eof()
            && !isToken(builder, FirTokenTypes.BRACE, "{")
            && !isToken(builder, FirTokenTypes.BRACE, "}")) {
          builder.advanceLexer();
        }
        if (isToken(builder, FirTokenTypes.BRACE, "{")) {
          var promMarker = builder.mark();
          braceDepth++;
          var promStartDepth = braceDepth;
          builder.advanceLexer(); // consume "{"
          while (!builder.eof() && braceDepth >= promStartDepth) {
            if (isToken(builder, FirTokenTypes.BRACE, "{")) braceDepth++;
            else if (isToken(builder, FirTokenTypes.BRACE, "}")) braceDepth--;
            builder.advanceLexer();
          }
          promMarker.done(FirElementTypes.PROMISE_BODY);
        }
        continue;
      }

      if (isToken(builder, FirTokenTypes.BRACE, "{")) braceDepth++;
      else if (isToken(builder, FirTokenTypes.BRACE, "}")) braceDepth--;
      builder.advanceLexer();
    }
  }

  private static boolean isToken(PsiBuilder builder, IElementType type, String text) {
    return builder.getTokenType() == type && text.equals(builder.getTokenText());
  }
}
