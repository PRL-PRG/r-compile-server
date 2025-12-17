fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4216983194;
    st `type.convert.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4216983194(x, `na.strings`, `as.is`, dec, numerals, tryLogical, `...`) {
  (reg x:*, reg na_strings:*, reg as_is:*, reg dec:*, reg numerals:*, reg tryLogical:*, reg ddd:dots) -+> V { var x:*, var `na.strings`:*, reg na_strings_isMissing:L, reg na_strings_orDefault:*, var `as.is`:*, var dec:*, reg dec_isMissing:L, reg dec_orDefault:*, var numerals:*, reg numerals_isMissing:L, reg numerals_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var tryLogical:*, reg tryLogical_isMissing:L, reg tryLogical_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg is_array:cls, reg r6:V, reg c1:L, reg l:*, reg storage_mode__:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg as_character:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg missing:cls, reg r14:V, reg c2:L, reg warning:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg C_typeconvert:*, reg C_typeconvert1:V, reg x5:*, reg x6:V, reg na_strings1:*, reg na_strings2:V, reg as_is1:*, reg as_is2:V, reg dec1:*, reg dec2:V, reg match_arg:cls, reg numerals1:*, reg numerals2:V, reg p1:p(V +), reg r20:V, reg tryLogical1:*, reg tryLogical2:V, reg _External2:cls, reg r21:V |
    mkenv;
    st x = x;
    na_strings_isMissing = missing.0(na_strings);
    if na_strings_isMissing then L0("NA") else L0(na_strings);
  L0(na_strings_orDefault):
    st `na.strings` = na_strings_orDefault;
    st `as.is` = as_is;
    dec_isMissing = missing.0(dec);
    if dec_isMissing then L1(".") else L1(dec);
  L1(dec_orDefault):
    st dec = dec_orDefault;
    numerals_isMissing = missing.0(numerals);
    if numerals_isMissing then L2() else L3(numerals);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("allow.loss", "warn.loss", "no.loss");
      goto L0(r2);
    L2():
      r = dyn base("allow.loss", "warn.loss", "no.loss");
      goto L0(r);
    };
    goto L3(p);
  L3(numerals_orDefault):
    st numerals = numerals_orDefault;
    tryLogical_isMissing = missing.0(tryLogical);
    if tryLogical_isMissing then L4(TRUE) else L4(tryLogical);
  L4(tryLogical_orDefault):
    st tryLogical = tryLogical_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.array`;
    base1 = ldf `is.array` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L5(r5):
    c1 = `as.logical`(r5);
    if c1 then L17() else L6();
  L13():
    x1 = ld x;
    check L15() else D0();
  L14():
    r4 = dyn base1(<sym x>);
    goto L5(r4);
  D0():
    deopt 2 [x1];
  L6():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L7():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L15():
    x2 = force? x1;
    checkMissing(x2);
    is_array = ldf `is.array` in base;
    r6 = dyn is_array(x2);
    check L16() else D1();
  L17():
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L18() else D2();
  D1():
    deopt 5 [r6];
  D2():
    deopt 9 ["character", l, "character"];
  L8(r10):
    st x = r10;
    goto L7();
  L9(r13):
    c2 = `as.logical`(r13);
    if c2 then L27() else L10();
  L16():
    goto L5(r6);
  L18():
    r7 = dyn storage_mode__(l, NULL, "character");
    check L19() else D3();
  L21():
    x3 = ld x;
    check L23() else D4();
  L22():
    r9 = dyn base2(<sym x>);
    goto L8(r9);
  L25():
    missing = ldf missing in base;
    r14 = dyn missing(<sym as.is>);
    goto L9(r14);
  L26():
    r12 = dyn base3(<sym as.is>);
    goto L9(r12);
  D3():
    deopt 11 ["character", r7];
  D4():
    deopt 15 [x3];
  L10():
    goto L11();
  L11():
    sym4 = ldf `.External2`;
    base4 = ldf `.External2` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L19():
    st x = r7;
    goto L7();
  L23():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r11 = dyn as_character(x4);
    check L24() else D5();
  L27():
    warning = ldf warning;
    check L28() else D6();
  D5():
    deopt 18 [r11];
  D6():
    deopt 24 [];
  L12(r18):
    popenv;
    return r18;
  L24():
    goto L8(r11);
  L28():
    r15 = dyn warning("'as.is' should be specified by the caller; using TRUE");
    check L29() else D7();
  L31():
    C_typeconvert = ld C_typeconvert;
    check L33() else D8();
  L32():
    r17 = dyn base4(<sym C_typeconvert>, <sym x>, <sym na.strings>, <sym as.is>, <sym dec>, <lang match.arg(numerals)>, <sym tryLogical>);
    goto L12(r17);
  D7():
    deopt 26 [r15];
  D8():
    deopt 34 [C_typeconvert];
  L29():
    st `as.is` = TRUE;
    goto L11();
  L33():
    C_typeconvert1 = force? C_typeconvert;
    checkMissing(C_typeconvert1);
    x5 = ld x;
    check L34() else D9();
  D9():
    deopt 36 [x5];
  L34():
    x6 = force? x5;
    checkMissing(x6);
    na_strings1 = ld `na.strings`;
    check L35() else D10();
  D10():
    deopt 38 [na_strings1];
  L35():
    na_strings2 = force? na_strings1;
    checkMissing(na_strings2);
    as_is1 = ld `as.is`;
    check L36() else D11();
  D11():
    deopt 40 [as_is1];
  L36():
    as_is2 = force? as_is1;
    checkMissing(as_is2);
    dec1 = ld dec;
    check L37() else D12();
  D12():
    deopt 42 [dec1];
  L37():
    dec2 = force? dec1;
    checkMissing(dec2);
    match_arg = ldf `match.arg`;
    check L38() else D13();
  D13():
    deopt 45 [];
  L38():
    p1 = prom<V +>{
      numerals1 = ld numerals;
      numerals2 = force? numerals1;
      checkMissing(numerals2);
      return numerals2;
    };
    r20 = dyn match_arg(p1);
    check L39() else D14();
  D14():
    deopt 47 [r20];
  L39():
    tryLogical1 = ld tryLogical;
    check L40() else D15();
  D15():
    deopt 48 [tryLogical1];
  L40():
    tryLogical2 = force? tryLogical1;
    checkMissing(tryLogical2);
    _External2 = ldf `.External2` in base;
    r21 = dyn _External2(C_typeconvert1, x6, na_strings2, as_is2, dec2, r20, tryLogical2);
    check L41() else D16();
  D16():
    deopt 51 [r21];
  L41():
    goto L12(r21);
  }
}