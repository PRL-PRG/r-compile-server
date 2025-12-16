fun main() {
  () -+> V { reg r:cls, reg tempfile:cls, reg r1:V, reg dump:cls, reg ls:cls, reg r2:V, reg p:p(V +), reg fil:*, reg fil1:V, reg p1:p(V +), reg r5:V, reg print:cls, reg _Last_value:*, reg _Last_value1:V, reg p2:p(V +), reg r7:V, reg unlink:cls, reg fil2:*, reg fil3:V, reg p3:p(V +), reg r9:V |
    mkenv;
    r = clos inner541792744;
    st dump = r;
    st x = 1.0;
    st y = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    tempfile = ldf tempfile;
    check L0() else D0();
  D0():
    deopt 10 [];
  L0():
    r1 = dyn tempfile[fileext](".Rdmped");
    check L1() else D1();
  D1():
    deopt 13 [r1];
  L1():
    st fil = r1;
    dump = ldf dump;
    check L2() else D2();
  D2():
    deopt 16 [];
  L2():
    p = prom<V +>{
      ls = ldf ls;
      r2 = dyn ls[pattern]("^[xyz]");
      return r2;
    };
    p1 = prom<V +>{
      fil = ld fil;
      fil1 = force? fil;
      checkMissing(fil1);
      return fil1;
    };
    r5 = dyn dump(p, p1);
    check L3() else D3();
  D3():
    deopt 19 [r5];
  L3():
    print = ldf print;
    check L4() else D4();
  D4():
    deopt 21 [];
  L4():
    p2 = prom<V +>{
      _Last_value = ld `.Last.value`;
      _Last_value1 = force? _Last_value;
      checkMissing(_Last_value1);
      return _Last_value1;
    };
    r7 = dyn print(p2);
    check L5() else D5();
  D5():
    deopt 23 [r7];
  L5():
    unlink = ldf unlink;
    check L6() else D6();
  D6():
    deopt 25 [];
  L6():
    p3 = prom<V +>{
      fil2 = ld fil;
      fil3 = force? fil2;
      checkMissing(fil3);
      return fil3;
    };
    r9 = dyn unlink(p3);
    check L7() else D7();
  D7():
    deopt 27 [r9];
  L7():
    popenv;
    return r9;
  }
}
fun inner541792744(list, file, append, control, envir, evaluate) {
  (reg list:*, reg file:*, reg append:*, reg control:*, reg envir:*, reg evaluate:*) -+> V { var list:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var evaluate:*, reg evaluate_isMissing:L, reg evaluate_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg sapply:cls, reg list1:*, reg list2:V, reg p1:p(V +), reg exists:*, reg exists1:V, reg p2:p(V +), reg envir1:*, reg envir2:V, reg p3:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg ex:*, reg ex1:V, reg any:cls, reg r10:V, reg r11:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg character:cls, reg r14:V, reg invisible:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg file3:*, reg file4:V, reg nzchar:cls, reg r20:V, reg c3:L, reg file5:cls, reg file6:*, reg file7:V, reg p4:p(V +), reg append1:*, reg append2:V, reg c4:L, reg p5:p(V +), reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg on_exit:cls, reg r26:V, reg r27:V, reg stdout:cls, reg r28:V, reg _deparseOpts:cls, reg control1:*, reg control2:V, reg p6:p(V +), reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg list3:*, reg list4:V, reg file8:*, reg file9:V, reg envir3:*, reg envir4:V, reg opts:*, reg opts1:V, reg evaluate1:*, reg evaluate2:V, reg dump:cls, reg r34:V |
    mkenv;
    st list = list;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("dumpdata.R") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L1(FALSE) else L1(append);
  L1(append_orDefault):
    st append = append_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L2("all") else L2(control);
  L2(control_orDefault):
    st control = control_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L3() else L4(envir);
  L3():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L4(p);
  L4(envir_orDefault):
    st envir = envir_orDefault;
    evaluate_isMissing = missing.0(evaluate);
    if evaluate_isMissing then L5(TRUE) else L5(evaluate);
  L5(evaluate_orDefault):
    st evaluate = evaluate_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L6(r3):
    c1 = `as.logical`(r3);
    if c1 then L21() else L7();
  L18():
    file1 = ld file;
    check L20() else D0();
  L19():
    r2 = dyn base(<sym file>);
    goto L6(r2);
  D0():
    deopt 1 [file1];
  L7():
    goto L16();
  L16():
    _deparseOpts = ldf `.deparseOpts`;
    check L49() else D14();
  L20():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L6(c);
  L21():
    sapply = ldf sapply;
    check L22() else D1();
  D1():
    deopt 5 [];
  D14():
    deopt 51 [];
  L22():
    p1 = prom<V +>{
      list1 = ld list;
      list2 = force? list1;
      checkMissing(list2);
      return list2;
    };
    p2 = prom<V +>{
      exists = ld exists;
      exists1 = force? exists;
      checkMissing(exists1);
      return exists1;
    };
    p3 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r7 = dyn sapply[, , envir](p1, p2, p3);
    check L23() else D2();
  L49():
    p6 = prom<V +>{
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      return control2;
    };
    r31 = dyn _deparseOpts(p6);
    check L50() else D15();
  D2():
    deopt 10 [r7];
  D15():
    deopt 53 [r31];
  L23():
    st ex = r7;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L50():
    st opts = r31;
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L8(r9):
    r11 = `!`(r9);
    c2 = `as.logical`(r11);
    if c2 then L28() else L9();
  L17(r33):
    popenv;
    return r33;
  L24():
    ex = ld ex;
    check L26() else D3();
  L25():
    r8 = dyn base1(<sym ex>);
    goto L8(r8);
  L51():
    list3 = ld list;
    check L53() else D16();
  L52():
    r32 = dyn base5(<lang dump(list, file, envir, opts, evaluate)>);
    goto L17(r32);
  D3():
    deopt 14 [ex];
  D16():
    deopt 57 [list3];
  L9():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L26():
    ex1 = force? ex;
    checkMissing(ex1);
    any = ldf any in base;
    r10 = dyn any(ex1);
    check L27() else D4();
  L28():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L53():
    list4 = force? list3;
    checkMissing(list4);
    file8 = ld file;
    check L54() else D17();
  D4():
    deopt 17 [r10];
  D17():
    deopt 59 [file8];
  L10(r13):
    popenv;
    return r13;
  L12(r19):
    c3 = `as.logical`(r19);
    if c3 then L40() else L13();
  L27():
    goto L8(r10);
  L29():
    character = ldf character;
    check L31() else D5();
  L30():
    r12 = dyn base2(<lang character()>);
    goto L10(r12);
  L36():
    file3 = ld file;
    check L38() else D8();
  L37():
    r18 = dyn base3(<sym file>);
    goto L12(r18);
  L54():
    file9 = force? file8;
    checkMissing(file9);
    envir3 = ld envir;
    check L55() else D18();
  D5():
    deopt 22 [];
  D8():
    deopt 31 [file3];
  D18():
    deopt 61 [envir3];
  L13():
    stdout = ldf stdout;
    check L46() else D12();
  L15(r27):
    goto L16();
  L31():
    r14 = dyn character();
    check L32() else D6();
  L38():
    file4 = force? file3;
    checkMissing(file4);
    nzchar = ldf nzchar in base;
    r20 = dyn nzchar(file4);
    check L39() else D9();
  L40():
    file5 = ldf file;
    check L41() else D10();
  L55():
    envir4 = force? envir3;
    checkMissing(envir4);
    opts = ld opts;
    check L56() else D19();
  D6():
    deopt 23 [r14];
  D9():
    deopt 34 [r20];
  D10():
    deopt 36 [];
  D12():
    deopt 45 [];
  D19():
    deopt 63 [opts];
  L32():
    invisible = ldf invisible in base;
    r15 = dyn invisible(r14);
    check L33() else D7();
  L39():
    goto L12(r20);
  L41():
    p4 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    p5 = prom<V +>{
      append1 = ld append;
      append2 = force? append1;
      checkMissing(append2);
      c4 = `as.logical`(append2);
      if c4 then L1() else L0();
    L0():
      return "w";
    L1():
      return "a";
    };
    r23 = dyn file5(p4, p5);
    check L42() else D11();
  L46():
    r28 = dyn stdout();
    check L47() else D13();
  L56():
    opts1 = force? opts;
    checkMissing(opts1);
    evaluate1 = ld evaluate;
    check L57() else D20();
  D7():
    deopt 25 [r15];
  D11():
    deopt 39 [r23];
  D13():
    deopt 46 [r28];
  D20():
    deopt 65 [evaluate1];
  L33():
    goto L10(r15);
  L42():
    st file = r23;
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L47():
    st file = r28;
    goto L15(r28);
  L57():
    evaluate2 = force? evaluate1;
    checkMissing(evaluate2);
    dump = ldf dump in base;
    r34 = dyn dump(list4, file9, envir4, opts1, evaluate2);
    check L58() else D21();
  D21():
    deopt 68 [r34];
  L14(r25):
    goto L15(r25);
  L43():
    on_exit = ldf `on.exit` in base;
    r26 = dyn on_exit(<lang close(file)>, TRUE);
    goto L14(r26);
  L44():
    r24 = dyn base4[, add](<lang close(file)>, TRUE);
    goto L14(r24);
  L58():
    goto L17(r34);
  }
}