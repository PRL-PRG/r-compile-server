fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3011209044;
    st parseLatex = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3011209044(text, filename, verbose, verbatim, verb) {
  (reg text:*, reg filename:*, reg verbose:*, reg verbatim:*, reg verb:*) -+> V { var text:*, var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var verbatim:*, reg verbatim_isMissing:L, reg verbatim_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c:cls, reg r8:V, reg p2:p(V +), var verb:*, reg verb_isMissing:L, reg verb_orDefault:*, reg srcfilecopy:cls, reg filename1:*, reg filename2:V, reg p3:p(V +), reg text1:*, reg text2:V, reg p4:p(V +), reg file_mtime:cls, reg filename3:*, reg filename4:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg paste:cls, reg text3:*, reg text4:V, reg p7:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg C_parseLatex:*, reg C_parseLatex1:V, reg text5:*, reg text6:V, reg srcfile:*, reg srcfile1:V, reg verbose1:*, reg verbose2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg verbatim1:*, reg verbatim2:V, reg as_character:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg verb1:*, reg verb2:V, reg as_character1:cls, reg r25:V, reg _External2:cls, reg r26:V |
    mkenv;
    st text = text;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L0() else L1(filename);
  L0():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym text>);
        goto L0(r2);
      L2():
        r = dyn base(<sym text>);
        goto L0(r);
      };
      r4 = dyn deparse1(p);
      return r4;
    };
    goto L1(p1);
  L1(filename_orDefault):
    st filename = filename_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L2(FALSE) else L2(verbose);
  L2(verbose_orDefault):
    st verbose = verbose_orDefault;
    verbatim_isMissing = missing.0(verbatim);
    if verbatim_isMissing then L3() else L4(verbatim);
  L3():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c = ldf c in base;
      r8 = dyn c("verbatim", "verbatim*", "Sinput", "Soutput");
      goto L0(r8);
    L2():
      r6 = dyn base1("verbatim", "verbatim*", "Sinput", "Soutput");
      goto L0(r6);
    };
    goto L4(p2);
  L4(verbatim_orDefault):
    st verbatim = verbatim_orDefault;
    verb_isMissing = missing.0(verb);
    if verb_isMissing then L5("\\Sexpr") else L5(verb);
  L5(verb_orDefault):
    st verb = verb_orDefault;
    srcfilecopy = ldf srcfilecopy;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p3 = prom<V +>{
      filename1 = ld filename;
      filename2 = force? filename1;
      checkMissing(filename2);
      return filename2;
    };
    p4 = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    p6 = prom<V +>{
      file_mtime = ldf `file.mtime`;
      p5 = prom<V +>{
        filename3 = ld filename;
        filename4 = force? filename3;
        checkMissing(filename4);
        return filename4;
      };
      r13 = dyn file_mtime(p5);
      return r13;
    };
    r15 = dyn srcfilecopy(p3, p4, p6);
    check L10() else D1();
  D1():
    deopt 5 [r15];
  L10():
    st srcfile = r15;
    paste = ldf paste;
    check L11() else D2();
  D2():
    deopt 8 [];
  L11():
    p7 = prom<V +>{
      text3 = ld text;
      text4 = force? text3;
      checkMissing(text4);
      return text4;
    };
    r17 = dyn paste[, collapse](p7, "\n");
    check L12() else D3();
  D3():
    deopt 12 [r17];
  L12():
    st text = r17;
    sym2 = ldf `.External2`;
    base2 = ldf `.External2` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L6(r19):
    popenv;
    return r19;
  L13():
    C_parseLatex = ld C_parseLatex;
    check L15() else D4();
  L14():
    r18 = dyn base2(<sym C_parseLatex>, <sym text>, <sym srcfile>, <sym verbose>, <lang as.character(verbatim)>, <lang as.character(verb)>);
    goto L6(r18);
  D4():
    deopt 16 [C_parseLatex];
  L15():
    C_parseLatex1 = force? C_parseLatex;
    checkMissing(C_parseLatex1);
    text5 = ld text;
    check L16() else D5();
  D5():
    deopt 18 [text5];
  L16():
    text6 = force? text5;
    checkMissing(text6);
    srcfile = ld srcfile;
    check L17() else D6();
  D6():
    deopt 20 [srcfile];
  L17():
    srcfile1 = force? srcfile;
    checkMissing(srcfile1);
    verbose1 = ld verbose;
    check L18() else D7();
  D7():
    deopt 22 [verbose1];
  L18():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L7(r21):
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L23() else L24();
  L19():
    verbatim1 = ld verbatim;
    check L21() else D8();
  L20():
    r20 = dyn base3(<sym verbatim>);
    goto L7(r20);
  D8():
    deopt 26 [verbatim1];
  L8(r24):
    _External2 = ldf `.External2` in base;
    r26 = dyn _External2(C_parseLatex1, text6, srcfile1, verbose2, r21, r24);
    check L27() else D12();
  L21():
    verbatim2 = force? verbatim1;
    checkMissing(verbatim2);
    as_character = ldf `as.character` in base;
    r22 = dyn as_character(verbatim2);
    check L22() else D9();
  L23():
    verb1 = ld verb;
    check L25() else D10();
  L24():
    r23 = dyn base4(<sym verb>);
    goto L8(r23);
  D9():
    deopt 29 [r22];
  D10():
    deopt 32 [verb1];
  D12():
    deopt 37 [r26];
  L22():
    goto L7(r22);
  L25():
    verb2 = force? verb1;
    checkMissing(verb2);
    as_character1 = ldf `as.character` in base;
    r25 = dyn as_character1(verb2);
    check L26() else D11();
  L27():
    goto L6(r26);
  D11():
    deopt 35 [r25];
  L26():
    goto L8(r25);
  }
}