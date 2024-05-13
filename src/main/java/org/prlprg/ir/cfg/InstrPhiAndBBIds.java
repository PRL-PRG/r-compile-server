package org.prlprg.ir.cfg;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.prlprg.parseprint.Scanner;
import org.prlprg.util.Lists;
import org.prlprg.util.Strings;

class InstrPhiAndBBIds {
  /**
   * Read a valid node or BB identifier, without the type or auxillary members, but with quotes or
   * the optional disambiguator. Return it <b>unquoted (unescaped) and without the disambiguator</b>
   * if either or both are present.
   *
   * <p>This must be in sync with {@link InstrPhiOrBBIdMap#next(String)}.
   *
   * @see #readIdNameLiterally(Scanner)
   */
  static String readIdName(Scanner s) {
    String base;
    if (s.nextCharIs('`')) {
      base = s.readQuoted('`');
    } else if (s.nextCharSatisfies(InstrPhiAndBBIds::isValidUnescapedIdStartChar)) {
      base = s.readWhile(InstrPhiAndBBIds::isValidUnescapedIdChar);
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
   * InstrPhiOrBBIdMap#next(String)}.
   *
   * @see #readIdName(Scanner)
   */
  static String readIdNameLiterally(Scanner s) {
    String base;
    if (s.nextCharIs('`')) {
      base = s.readQuotedLiterally('`');
    } else if (s.nextCharSatisfies(InstrPhiAndBBIds::isValidUnescapedIdStartChar)) {
      base = s.readWhile(InstrPhiAndBBIds::isValidUnescapedIdChar);
    } else {
      throw s.fail(
          "valid identifier start (letter, '_', '.', or '`')", Strings.escape(s.peekChar()));
    }

    if (s.trySkip('@')) {
      base += '@' + s.readUInt();
    }

    return base;
  }

  /** We use the same rules as R, except we don't escape R's literals. */
  static boolean isValidUnescapedId(String name) {
    assert !name.isEmpty();
    return !name.equals("_")
        && isValidUnescapedIdStartChar(name.chars().findFirst().orElseThrow())
        && name.chars().allMatch(InstrPhiAndBBIds::isValidUnescapedIdChar);
  }

  static boolean isValidUnescapedIdStartChar(int c) {
    return Character.isLetter(c) || c == '_' || c == '.';
  }

  static boolean isValidUnescapedIdChar(int c) {
    return isValidUnescapedIdStartChar(c) || Character.isDigit(c);
  }

  private InstrPhiAndBBIds() {}
}

class InstrPhiOrBBIdMap {
  private final Map<String, NextIdFreeList> existingIds = new HashMap<>();

  /**
   * Escapes the given identifier and disambiguates using the given id-map (both only if necessary).
   */
  String next(String name) {
    assert !name.isEmpty();
    // Escape the ID if necessary.
    if (!InstrPhiAndBBIds.isValidUnescapedId(name)) {
      name = "`" + name.replace("`", "\\`") + "`";
    }

    String result;
    var freeList = existingIds.computeIfAbsent(name, _ -> new NextIdFreeList());
    result = freeList.disambiguate(name);
    return result;
  }

  /** Mark the ID as removed so that {@link #next(String)} can return it again. */
  void remove(String name) {
    var components = name.split("@");
    name = components[0];
    var disambiguator = components.length == 1 ? 0 : Integer.parseInt(components[1]);
    assert !name.isEmpty() && InstrPhiAndBBIds.isValidUnescapedId(name)
        : "id can't be marked as removed because it was never added. Furthermore, it couldn't have been added because it's invalid";
    var freeList = existingIds.get(name);
    assert freeList != null : "id can't be marked as removed because it was never added";
    freeList.free(disambiguator);
  }

  private static class NextIdFreeList {
    private final List<Integer> freeIds = new ArrayList<>();
    private int nextIdAfterFree = 0;

    private String disambiguate(String name) {
      var disambiguator = freeIds.isEmpty() ? nextIdAfterFree++ : freeIds.removeFirst();
      return disambiguator == 0 ? name : name + "@" + disambiguator;
    }

    private void free(int id) {
      Lists.binaryInsert(freeIds, id);
    }
  }
}
