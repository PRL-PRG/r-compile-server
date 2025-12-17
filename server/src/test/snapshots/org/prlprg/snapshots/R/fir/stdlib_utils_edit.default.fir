fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1119068933;
    st `edit.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1119068933(name, file, title, editor, `...`) {
  (reg name:*, reg file:*, reg title:*, reg editor:*, reg ddd:dots) -+> V { var name:*, reg name_isMissing:L, reg name_orDefault:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, var title:*, reg title_isMissing:L, reg title_orDefault:*, var editor:*, reg editor_isMissing:L, reg editor_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg title1:*, reg title2:V, reg c:V, reg c1:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg substitute:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg editor1:*, reg editor2:V, reg is_function:cls, reg r12:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg editor3:cls, reg name1:*, reg name2:V, reg p2:p(V +), reg file1:*, reg file2:V, reg p3:p(V +), reg title3:*, reg title4:V, reg p4:p(V +), reg r18:V, reg invisible:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg C_edit:*, reg C_edit1:V, reg name3:*, reg name4:V, reg file3:*, reg file4:V, reg title5:*, reg title6:V, reg editor4:*, reg editor5:V, reg _External2:cls, reg r22:V |
    mkenv;
    name_isMissing = missing.0(name);
    if name_isMissing then L0(NULL) else L0(name);
  L0(name_orDefault):
    st name = name_orDefault;
    file_isMissing = missing.0(file);
    if file_isMissing then L1("") else L1(file);
  L1(file_orDefault):
    st file = file_orDefault;
    title_isMissing = missing.0(title);
    if title_isMissing then L2(NULL) else L2(title);
  L2(title_orDefault):
    st title = title_orDefault;
    editor_isMissing = missing.0(editor);
    if editor_isMissing then L3() else L4(editor);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("editor");
      return r;
    };
    goto L4(p);
  L4(editor_orDefault):
    st editor = editor_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L5(r3):
    c1 = `as.logical`(r3);
    if c1 then L15() else L6();
  L12():
    title1 = ld title;
    check L14() else D0();
  L13():
    r2 = dyn base(<sym title>);
    goto L5(r2);
  D0():
    deopt 1 [title1];
  L6():
    goto L7();
  L7():
    sym2 = ldf `is.function`;
    base2 = ldf `is.function` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L14():
    title2 = force? title1;
    checkMissing(title2);
    c = `==`(title2, NULL);
    goto L5(c);
  L15():
    deparse1 = ldf deparse1;
    check L16() else D1();
  D1():
    deopt 5 [];
  L8(r11):
    c2 = `as.logical`(r11);
    if c2 then L23() else L9();
  L16():
    p1 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      substitute = ldf substitute in base;
      r6 = dyn substitute(<sym name>);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym name>);
      goto L0(r4);
    };
    r8 = dyn deparse1(p1);
    check L17() else D2();
  L19():
    editor1 = ld editor;
    check L21() else D3();
  L20():
    r10 = dyn base2(<sym editor>);
    goto L8(r10);
  D2():
    deopt 7 [r8];
  D3():
    deopt 13 [editor1];
  L9():
    sym4 = ldf `.External2`;
    base4 = ldf `.External2` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L17():
    st title = r8;
    goto L7();
  L21():
    editor2 = force? editor1;
    checkMissing(editor2);
    is_function = ldf `is.function` in base;
    r12 = dyn is_function(editor2);
    check L22() else D4();
  L23():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  D4():
    deopt 16 [r12];
  L10(r14):
    popenv;
    return r14;
  L11(r21):
    popenv;
    return r21;
  L22():
    goto L8(r12);
  L24():
    editor3 = ldf editor;
    check L26() else D5();
  L25():
    r13 = dyn base3(<lang editor(name=name, file=file, title=title)>);
    goto L10(r13);
  L30():
    C_edit = ld C_edit;
    check L32() else D8();
  L31():
    r20 = dyn base4(<sym C_edit>, <sym name>, <sym file>, <sym title>, <sym editor>);
    goto L11(r20);
  D5():
    deopt 20 [];
  D8():
    deopt 32 [C_edit];
  L26():
    p2 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p3 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p4 = prom<V +>{
      title3 = ld title;
      title4 = force? title3;
      checkMissing(title4);
      return title4;
    };
    r18 = dyn editor3[name, file, title](p2, p3, p4);
    check L27() else D6();
  L32():
    C_edit1 = force? C_edit;
    checkMissing(C_edit1);
    name3 = ld name;
    check L33() else D9();
  D6():
    deopt 27 [r18];
  D9():
    deopt 34 [name3];
  L27():
    invisible = ldf invisible in base;
    r19 = dyn invisible(r18);
    check L28() else D7();
  L33():
    name4 = force? name3;
    checkMissing(name4);
    file3 = ld file;
    check L34() else D10();
  D7():
    deopt 29 [r19];
  D10():
    deopt 36 [file3];
  L28():
    goto L10(r19);
  L34():
    file4 = force? file3;
    checkMissing(file4);
    title5 = ld title;
    check L35() else D11();
  D11():
    deopt 38 [title5];
  L35():
    title6 = force? title5;
    checkMissing(title6);
    editor4 = ld editor;
    check L36() else D12();
  D12():
    deopt 40 [editor4];
  L36():
    editor5 = force? editor4;
    checkMissing(editor5);
    _External2 = ldf `.External2` in base;
    r22 = dyn _External2(C_edit1, name4, file4, title6, editor5);
    check L37() else D13();
  D13():
    deopt 43 [r22];
  L37():
    goto L11(r22);
  }
}