fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner353331921;
    st strOptions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner353331921(`strict.width`, `digits.d`, `vec.len`, `list.len`, `deparse.lines`, `drop.deparse.attr`, formatNum) {
  (reg strict_width:*, reg digits_d:*, reg vec_len:*, reg list_len:*, reg deparse_lines:*, reg drop_deparse_attr:*, reg formatNum:*) -+> V { var `strict.width`:*, reg strict_width_isMissing:L, reg strict_width_orDefault:*, var `digits.d`:*, reg digits_d_isMissing:L, reg digits_d_orDefault:*, var `vec.len`:*, reg vec_len_isMissing:L, reg vec_len_orDefault:*, var `list.len`:*, reg list_len_isMissing:L, reg list_len_orDefault:*, var `deparse.lines`:*, reg deparse_lines_isMissing:L, reg deparse_lines_orDefault:*, var `drop.deparse.attr`:*, reg drop_deparse_attr_isMissing:L, reg drop_deparse_attr_orDefault:*, var formatNum:*, reg formatNum_isMissing:L, reg formatNum_orDefault:*, reg r:cls, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg strict_width1:*, reg strict_width2:V, reg digits_d1:*, reg digits_d2:V, reg vec_len1:*, reg vec_len2:V, reg list_len1:*, reg list_len2:V, reg deparse_lines1:*, reg deparse_lines2:V, reg drop_deparse_attr1:*, reg drop_deparse_attr2:V, reg match_fun:cls, reg formatNum1:*, reg formatNum2:V, reg p1:p(V +), reg r5:V, reg list:cls, reg r6:V |
    mkenv;
    strict_width_isMissing = missing.0(strict_width);
    if strict_width_isMissing then L0("no") else L0(strict_width);
  L0(strict_width_orDefault):
    st `strict.width` = strict_width_orDefault;
    digits_d_isMissing = missing.0(digits_d);
    if digits_d_isMissing then L1(3) else L1(digits_d);
  L1(digits_d_orDefault):
    st `digits.d` = digits_d_orDefault;
    vec_len_isMissing = missing.0(vec_len);
    if vec_len_isMissing then L2(4) else L2(vec_len);
  L2(vec_len_orDefault):
    st `vec.len` = vec_len_orDefault;
    list_len_isMissing = missing.0(list_len);
    if list_len_isMissing then L3(99) else L3(list_len);
  L3(list_len_orDefault):
    st `list.len` = list_len_orDefault;
    deparse_lines_isMissing = missing.0(deparse_lines);
    if deparse_lines_isMissing then L4(NULL) else L4(deparse_lines);
  L4(deparse_lines_orDefault):
    st `deparse.lines` = deparse_lines_orDefault;
    drop_deparse_attr_isMissing = missing.0(drop_deparse_attr);
    if drop_deparse_attr_isMissing then L5(TRUE) else L5(drop_deparse_attr);
  L5(drop_deparse_attr_orDefault):
    st `drop.deparse.attr` = drop_deparse_attr_orDefault;
    formatNum_isMissing = missing.0(formatNum);
    if formatNum_isMissing then L6() else L7(formatNum);
  L6():
    p = prom<V +>{
      r = clos inner2044426018;
      return r;
    };
    goto L7(p);
  L7(formatNum_orDefault):
    st formatNum = formatNum_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L8(r3):
    popenv;
    return r3;
  L9():
    strict_width1 = ld `strict.width`;
    check L11() else D0();
  L10():
    r2 = dyn base[`strict.width`, `digits.d`, `vec.len`, `list.len`, `deparse.lines`, `drop.deparse.attr`, formatNum](<sym strict.width>, <sym digits.d>, <sym vec.len>, <sym list.len>, <sym deparse.lines>, <sym drop.deparse.attr>, <lang match.fun(formatNum)>);
    goto L8(r2);
  D0():
    deopt 2 [strict_width1];
  L11():
    strict_width2 = force? strict_width1;
    checkMissing(strict_width2);
    digits_d1 = ld `digits.d`;
    check L12() else D1();
  D1():
    deopt 5 [digits_d1];
  L12():
    digits_d2 = force? digits_d1;
    checkMissing(digits_d2);
    vec_len1 = ld `vec.len`;
    check L13() else D2();
  D2():
    deopt 8 [vec_len1];
  L13():
    vec_len2 = force? vec_len1;
    checkMissing(vec_len2);
    list_len1 = ld `list.len`;
    check L14() else D3();
  D3():
    deopt 11 [list_len1];
  L14():
    list_len2 = force? list_len1;
    checkMissing(list_len2);
    deparse_lines1 = ld `deparse.lines`;
    check L15() else D4();
  D4():
    deopt 14 [deparse_lines1];
  L15():
    deparse_lines2 = force? deparse_lines1;
    checkMissing(deparse_lines2);
    drop_deparse_attr1 = ld `drop.deparse.attr`;
    check L16() else D5();
  D5():
    deopt 17 [drop_deparse_attr1];
  L16():
    drop_deparse_attr2 = force? drop_deparse_attr1;
    checkMissing(drop_deparse_attr2);
    match_fun = ldf `match.fun`;
    check L17() else D6();
  D6():
    deopt 21 [];
  L17():
    p1 = prom<V +>{
      formatNum1 = ld formatNum;
      formatNum2 = force? formatNum1;
      checkMissing(formatNum2);
      return formatNum2;
    };
    r5 = dyn match_fun(p1);
    check L18() else D7();
  D7():
    deopt 23 [r5];
  L18():
    list = ldf list in base;
    r6 = dyn list(strict_width2, digits_d2, vec_len2, list_len2, deparse_lines2, drop_deparse_attr2, r5);
    check L19() else D8();
  D8():
    deopt 26 [r6];
  L19():
    goto L8(r6);
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg format:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    format = ldf format;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r1 = dyn format[, trim, drop0trailing, `...`](p, TRUE, TRUE, ddd1);
    check L1() else D1();
  D1():
    deopt 8 [r1];
  L1():
    popenv;
    return r1;
  }
}