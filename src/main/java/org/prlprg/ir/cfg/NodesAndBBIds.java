package org.prlprg.ir.cfg;

import java.util.Map;
import org.prlprg.parseprint.Scanner;
import org.prlprg.util.Strings;

class NodesAndBBIds {
  /**
   * Read a valid node or BB identifier, without the type or auxillary members, but with quotes or
   * the optional disambiguator. Return it <b>unquoted (unescaped) and without the disambiguator</b>
   * if either or both are present.
   *
   * <p>This must be in sync with {@link NodesAndBBIds#nextId(String, Map)}.
   *
   * @see #readIdNameLiterally(Scanner)
   */
  static String readIdName(Scanner s) {
    String base;
    if (s.nextCharIs('`')) {
      base = s.readQuoted('`');
    } else if (s.nextCharSatisfies(NodesAndBBIds::isValidUnescapedIdStartChar)) {
      base = s.readWhile(NodesAndBBIds::isValidUnescapedIdChar);
    } else {
      throw s.fail(
          "valid identifier start (letter, '_', '.', or '`')", Strings.escape(s.peekChar()));
    }

    // Parse but don't include the disambiguator.
    if (s.trySkip('@')) {
      s.readUInt();
    }

    return base;
  }

  /**
   * Read a valid node or BB identifier, without the type or auxillary members, but with quotes or
   * the optional disambiguator. Return it <b>still quoted and with the disambiguator</b> if either
   * or both are present.
   *
   * <p>This must be in sync with {@link #readIdName(Scanner)} and {@link
   * NodesAndBBIds#nextId(String, Map)}.
   *
   * @see #readIdName(Scanner)
   */
  static String readIdNameLiterally(Scanner s) {
    String base;
    if (s.nextCharIs('`')) {
      base = s.readQuotedLiterally('`');
    } else if (s.nextCharSatisfies(NodesAndBBIds::isValidUnescapedIdStartChar)) {
      base = s.readWhile(NodesAndBBIds::isValidUnescapedIdChar);
    } else {
      throw s.fail(
          "valid identifier start (letter, '_', '.', or '`')", Strings.escape(s.peekChar()));
    }

    if (s.trySkip('@')) {
      base += '@' + s.readUInt();
    }

    return base;
  }

  /**
   * Escapes the given identifier and disambiguates using the given id-map (both only if necessary).
   */
  static String nextId(String name, Map<String, Integer> nextIds) {
    assert !name.isEmpty();
    // Escape the ID if necessary.
    if (!isValidUnescapedId(name)) {
      name = "`" + name.replace("`", "\\`") + "`";
    }

    String result;
    if (nextIds.containsKey(name)) {
      result = name + "@" + nextIds.get(name);
      nextIds.put(name, nextIds.get(name) + 1);
    } else {
      result = name;
      nextIds.put(name, 0);
    }
    return result;
  }

  /** We use the same rules as R, except we don't escape R's literals. */
  static boolean isValidUnescapedId(String name) {
    assert !name.isEmpty();
    return !name.equals("_")
        && isValidUnescapedIdStartChar(name.chars().findFirst().orElseThrow())
        && name.chars().allMatch(NodesAndBBIds::isValidUnescapedIdChar);
  }

  static boolean isValidUnescapedIdStartChar(int c) {
    return Character.isLetter(c) || c == '_' || c == '.';
  }

  static boolean isValidUnescapedIdChar(int c) {
    return isValidUnescapedIdStartChar(c) || Character.isDigit(c);
  }

  private NodesAndBBIds() {}
}
