fun main() {
  () -+> V { reg r:cls, reg tempfile:cls, reg r1:V, reg cat:cls, reg fil:*, reg fil1:V, reg p:p(V +), reg r3:V, reg count_fields:cls, reg fil2:*, reg fil3:V, reg p1:p(V +), reg r5:V, reg unlink:cls, reg fil4:*, reg fil5:V, reg p2:p(V +), reg r7:V |
    mkenv;
    r = clos inner4267212101;
    st `count.fields` = r;
    tempfile = ldf tempfile;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn tempfile();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st fil = r1;
    cat = ldf cat;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p = prom<V +>{
      fil = ld fil;
      fil1 = force? fil;
      checkMissing(fil1);
      return fil1;
    };
    r3 = dyn cat[, , , file, sep]("NAME", "1:John", "2:Paul", p, "\n");
    check L3() else D3();
  D3():
    deopt 16 [r3];
  L3():
    count_fields = ldf `count.fields`;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p1 = prom<V +>{
      fil2 = ld fil;
      fil3 = force? fil2;
      checkMissing(fil3);
      return fil3;
    };
    r5 = dyn count_fields[, sep](p1, ":");
    check L5() else D5();
  D5():
    deopt 22 [r5];
  L5():
    unlink = ldf unlink;
    check L6() else D6();
  D6():
    deopt 24 [];
  L6():
    p2 = prom<V +>{
      fil4 = ld fil;
      fil5 = force? fil4;
      checkMissing(fil5);
      return fil5;
    };
    r7 = dyn unlink(p2);
    check L7() else D7();
  D7():
    deopt 26 [r7];
  L7():
    popenv;
    return r7;
  }
}
fun inner4267212101(file, sep, quote, skip, `blank.lines.skip`, `comment.char`) {
  (reg file:*, reg sep:*, reg quote:*, reg skip:*, reg blank_lines_skip:*, reg comment_char:*) -+> V { var file:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var skip:*, reg skip_isMissing:L, reg skip_orDefault:*, var `blank.lines.skip`:*, reg blank_lines_skip_isMissing:L, reg blank_lines_skip_orDefault:*, var `comment.char`:*, reg comment_char_isMissing:L, reg comment_char_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg file3:cls, reg file4:*, reg file5:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg on_exit:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg file6:*, reg file7:V, reg inherits:cls, reg r10:V, reg r11:V, reg c2:L, reg stop:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg C_countfields:*, reg C_countfields1:V, reg file8:*, reg file9:V, reg sep1:*, reg sep2:V, reg quote1:*, reg quote2:V, reg skip1:*, reg skip2:V, reg blank_lines_skip1:*, reg blank_lines_skip2:V, reg comment_char1:*, reg comment_char2:V, reg _External:cls, reg r16:V |
    mkenv;
    st file = file;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0("") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L1("\"'") else L1(quote);
  L1(quote_orDefault):
    st quote = quote_orDefault;
    skip_isMissing = missing.0(skip);
    if skip_isMissing then L2(0.0) else L2(skip);
  L2(skip_orDefault):
    st skip = skip_orDefault;
    blank_lines_skip_isMissing = missing.0(blank_lines_skip);
    if blank_lines_skip_isMissing then L3(TRUE) else L3(blank_lines_skip);
  L3(blank_lines_skip_orDefault):
    st `blank.lines.skip` = blank_lines_skip_orDefault;
    comment_char_isMissing = missing.0(comment_char);
    if comment_char_isMissing then L4("#") else L4(comment_char);
  L4(comment_char_orDefault):
    st `comment.char` = comment_char_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L5(r1):
    c1 = `as.logical`(r1);
    if c1 then L16() else L6();
  L13():
    file1 = ld file;
    check L15() else D0();
  L14():
    r = dyn base(<sym file>);
    goto L5(r);
  D0():
    deopt 1 [file1];
  L6():
    goto L8();
  L8():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L15():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L5(c);
  L16():
    file3 = ldf file;
    check L17() else D1();
  D1():
    deopt 5 [];
  L9(r9):
    r11 = `!`(r9);
    c2 = `as.logical`(r11);
    if c2 then L26() else L10();
  L17():
    p = prom<V +>{
      file4 = ld file;
      file5 = force? file4;
      checkMissing(file5);
      return file5;
    };
    r3 = dyn file3(p);
    check L18() else D2();
  L22():
    file6 = ld file;
    check L24() else D3();
  L23():
    r8 = dyn base2(<sym file>, "connection");
    goto L9(r8);
  D2():
    deopt 7 [r3];
  D3():
    deopt 16 [file6];
  L10():
    goto L11();
  L11():
    sym3 = ldf `.External`;
    base3 = ldf `.External` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L18():
    st file = r3;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L24():
    file7 = force? file6;
    checkMissing(file7);
    inherits = ldf inherits in base;
    r10 = dyn inherits(file7, "connection", FALSE);
    check L25() else D4();
  L26():
    stop = ldf stop;
    check L27() else D5();
  D4():
    deopt 21 [r10];
  D5():
    deopt 24 [];
  L7(r5):
    goto L8();
  L12(r15):
    popenv;
    return r15;
  L19():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang close(file)>);
    goto L7(r6);
  L20():
    r4 = dyn base1(<lang close(file)>);
    goto L7(r4);
  L25():
    goto L9(r10);
  L27():
    r12 = dyn stop("'file' must be a character string or connection");
    check L28() else D6();
  L30():
    C_countfields = ld C_countfields;
    check L32() else D7();
  L31():
    r14 = dyn base3(<sym C_countfields>, <sym file>, <sym sep>, <sym quote>, <sym skip>, <sym blank.lines.skip>, <sym comment.char>);
    goto L12(r14);
  D6():
    deopt 26 [r12];
  D7():
    deopt 31 [C_countfields];
  L28():
    goto L11();
  L32():
    C_countfields1 = force? C_countfields;
    checkMissing(C_countfields1);
    file8 = ld file;
    check L33() else D8();
  D8():
    deopt 33 [file8];
  L33():
    file9 = force? file8;
    checkMissing(file9);
    sep1 = ld sep;
    check L34() else D9();
  D9():
    deopt 35 [sep1];
  L34():
    sep2 = force? sep1;
    checkMissing(sep2);
    quote1 = ld quote;
    check L35() else D10();
  D10():
    deopt 37 [quote1];
  L35():
    quote2 = force? quote1;
    checkMissing(quote2);
    skip1 = ld skip;
    check L36() else D11();
  D11():
    deopt 39 [skip1];
  L36():
    skip2 = force? skip1;
    checkMissing(skip2);
    blank_lines_skip1 = ld `blank.lines.skip`;
    check L37() else D12();
  D12():
    deopt 41 [blank_lines_skip1];
  L37():
    blank_lines_skip2 = force? blank_lines_skip1;
    checkMissing(blank_lines_skip2);
    comment_char1 = ld `comment.char`;
    check L38() else D13();
  D13():
    deopt 43 [comment_char1];
  L38():
    comment_char2 = force? comment_char1;
    checkMissing(comment_char2);
    _External = ldf `.External` in base;
    r16 = dyn _External(C_countfields1, file9, sep2, quote2, skip2, blank_lines_skip2, comment_char2);
    check L39() else D14();
  D14():
    deopt 46 [r16];
  L39():
    goto L12(r16);
  }
}