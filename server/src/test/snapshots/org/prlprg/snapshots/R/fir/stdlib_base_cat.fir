fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg r2:cls, reg r3:V, reg cat:cls, reg iter:*, reg iter1:V, reg r4:V, reg p:p(V +), reg r6:V, reg cat1:cls, reg paste:cls, reg letters:*, reg letters1:V, reg p1:p(V +), reg r8:V, reg r9:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg paste1:cls, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V |
    mkenv;
    r = clos `inner-1692883817`;
    st cat = r;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn __("stats", "rpois");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    checkFun.0(r1);
    r2 = r1 as cls;
    r3 = dyn r2[, lambda](1.0, 10.0);
    check L2() else D2();
  D2():
    deopt 12 [r3];
  L2():
    st iter = r3;
    cat = ldf cat;
    check L3() else D3();
  D3():
    deopt 15 [];
  L3():
    p = prom<V +>{
      iter = ld iter;
      iter1 = force? iter;
      checkMissing(iter1);
      r4 = `+`(iter1, 1.0);
      st iter = r4;
      invisible.0();
      return r4;
    };
    r6 = dyn cat("iteration = ", p, "\n");
    check L4() else D4();
  D4():
    deopt 19 [r6];
  L4():
    cat1 = ldf cat;
    check L5() else D5();
  D5():
    deopt 21 [];
  L5():
    p3 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        letters = ld letters;
        letters1 = force? letters;
        checkMissing(letters1);
        return letters1;
      };
      p2 = prom<V +>{
        r8 = `:`(1.0, 26.0);
        r9 = `*`(100.0, r8);
        return r9;
      };
      r11 = dyn paste(p1, p2);
      return r11;
    };
    p5 = prom<V +>{
      paste1 = ldf paste0;
      p4 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      r14 = dyn paste1("{", p4, "}:");
      return r14;
    };
    r16 = dyn cat1[, fill, labels](p3, TRUE, p5);
    check L6() else D6();
  D6():
    deopt 27 [r16];
  L6():
    popenv;
    return r16;
  }
}
fun `inner-1692883817`(`...`, file, sep, fill, labels, append) {
  (reg ddd:dots, reg file:*, reg sep:*, reg fill:*, reg labels:*, reg append:*) -+> V { var `...`:dots?, var file:*, reg file_isMissing:L, reg file_orDefault:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var fill:*, reg fill_isMissing:L, reg fill_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg file3:*, reg file4:V, reg r2:V, reg c2:L, reg stdout:cls, reg r3:V, reg r4:V, reg startsWith:cls, reg file5:*, reg file6:V, reg p:p(V +), reg r6:V, reg c3:L, reg pipe:cls, reg substring:cls, reg file7:*, reg file8:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg on_exit:cls, reg r13:V, reg file9:cls, reg file10:*, reg file11:V, reg p3:p(V +), reg ifelse:cls, reg append1:*, reg append2:V, reg p4:p(V +), reg r16:V, reg p5:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg on_exit1:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg list:cls, reg ddd1:dots?, reg r26:V, reg file12:*, reg file13:V, reg sep1:*, reg sep2:V, reg fill1:*, reg fill2:V, reg labels1:*, reg labels2:V, reg append3:*, reg append4:V, reg cat:cls, reg r27:V |
    mkenv;
    st `...` = ddd;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L1(" ") else L1(sep);
  L1(sep_orDefault):
    st sep = sep_orDefault;
    fill_isMissing = missing.0(fill);
    if fill_isMissing then L2(FALSE) else L2(fill);
  L2(fill_orDefault):
    st fill = fill_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L3(NULL) else L3(labels);
  L3(labels_orDefault):
    st labels = labels_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L4(FALSE) else L4(append);
  L4(append_orDefault):
    st append = append_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L5(r1):
    c1 = `as.logical`(r1);
    if c1 then L17() else L6();
  L14():
    file1 = ld file;
    check L16() else D0();
  L15():
    r = dyn base(<sym file>);
    goto L5(r);
  D0():
    deopt 1 [file1];
  L6():
    goto L11();
  L11():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L16():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L5(c);
  L17():
    file3 = ld file;
    check L18() else D1();
  D1():
    deopt 4 [file3];
  L12(r23):
    popenv;
    return r23;
  L18():
    file4 = force? file3;
    checkMissing(file4);
    r2 = `==`(file4, "");
    c2 = `as.logical`(r2);
    if c2 then L19() else L7();
  L36():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L37():
    r22 = dyn base3(<lang cat(list(...), file, sep, fill, labels, append)>);
    goto L12(r22);
  L7():
    startsWith = ldf startsWith;
    check L23() else D4();
  L8(r4):
    goto L11();
  L13(r25):
    file12 = ld file;
    check L42() else D12();
  L19():
    stdout = ldf stdout;
    check L20() else D2();
  L38():
    list = ldf list;
    check L40() else D10();
  L39():
    r24 = dyn base4(<sym ...>);
    goto L13(r24);
  D2():
    deopt 9 [];
  D4():
    deopt 13 [];
  D10():
    deopt 41 [];
  D12():
    deopt 44 [file12];
  L20():
    r3 = dyn stdout();
    check L21() else D3();
  L23():
    p = prom<V +>{
      file5 = ld file;
      file6 = force? file5;
      checkMissing(file6);
      return file6;
    };
    r6 = dyn startsWith(p, "|");
    check L24() else D5();
  L40():
    ddd1 = ld `...`;
    r26 = dyn list[`...`](ddd1);
    check L41() else D11();
  L42():
    file13 = force? file12;
    checkMissing(file13);
    sep1 = ld sep;
    check L43() else D13();
  D3():
    deopt 10 [r3];
  D5():
    deopt 16 [r6];
  D11():
    deopt 43 [r26];
  D13():
    deopt 46 [sep1];
  L21():
    st file = r3;
    goto L8(r3);
  L24():
    c3 = `as.logical`(r6);
    if c3 then L25() else L9();
  L41():
    goto L13(r26);
  L43():
    sep2 = force? sep1;
    checkMissing(sep2);
    fill1 = ld fill;
    check L44() else D14();
  D14():
    deopt 48 [fill1];
  L9():
    file9 = ldf file;
    check L31() else D8();
  L25():
    pipe = ldf pipe;
    check L26() else D6();
  L44():
    fill2 = force? fill1;
    checkMissing(fill2);
    labels1 = ld labels;
    check L45() else D15();
  D6():
    deopt 18 [];
  D8():
    deopt 27 [];
  D15():
    deopt 50 [labels1];
  L26():
    p2 = prom<V +>{
      substring = ldf substring;
      p1 = prom<V +>{
        file7 = ld file;
        file8 = force? file7;
        checkMissing(file8);
        return file8;
      };
      r8 = dyn substring(p1, 2);
      return r8;
    };
    r10 = dyn pipe(p2, "w");
    check L27() else D7();
  L31():
    p3 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    p5 = prom<V +>{
      ifelse = ldf ifelse;
      p4 = prom<V +>{
        append1 = ld append;
        append2 = force? append1;
        checkMissing(append2);
        return append2;
      };
      r16 = dyn ifelse(p4, "a", "w");
      return r16;
    };
    r18 = dyn file9(p3, p5);
    check L32() else D9();
  L45():
    labels2 = force? labels1;
    checkMissing(labels2);
    append3 = ld append;
    check L46() else D16();
  D7():
    deopt 21 [r10];
  D9():
    deopt 30 [r18];
  D16():
    deopt 52 [append3];
  L27():
    st file = r10;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L32():
    st file = r18;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L46():
    append4 = force? append3;
    checkMissing(append4);
    cat = ldf cat in base;
    r27 = dyn cat(r25, file13, sep2, fill2, labels2, append4);
    check L47() else D17();
  D17():
    deopt 55 [r27];
  L10(r12):
    goto L8(r12);
  L28():
    on_exit = ldf `on.exit` in base;
    r13 = dyn on_exit(<lang close(file)>);
    goto L10(r13);
  L29():
    r11 = dyn base1(<lang close(file)>);
    goto L10(r11);
  L33():
    on_exit1 = ldf `on.exit` in base;
    r20 = dyn on_exit1(<lang close(file)>);
    goto L8(r20);
  L34():
    r19 = dyn base2(<lang close(file)>);
    goto L8(r19);
  L47():
    goto L12(r27);
  }
}