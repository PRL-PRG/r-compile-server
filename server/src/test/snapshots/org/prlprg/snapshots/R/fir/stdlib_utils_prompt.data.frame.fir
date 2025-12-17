fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1292076475;
    st `prompt.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1292076475(object, filename, name, `...`) {
  (reg object:*, reg filename:*, reg name:*, reg ddd:dots) -+> V { var object:*, var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object1:*, reg object2:V, reg c1:L, reg c2:L, reg object3:*, reg object4:V, reg object5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg substitute:cls, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg name1:*, reg name2:V, reg c3:L, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r10:V, reg r11:V, reg name3:*, reg name4:V, reg as_character:cls, reg r12:V, reg stop:cls, reg r13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r14:V, reg r15:V, reg filename1:*, reg filename2:V, reg c5:V, reg c6:L, reg paste0:cls, reg name5:*, reg name6:V, reg p:p(V +), reg r17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg missing1:cls, reg r21:V, reg r22:V, reg c7:L, reg object7:*, reg object8:V, reg object9:V, reg get:cls, reg name7:*, reg name8:V, reg p1:p(V +), reg parent_frame:cls, reg r24:V, reg p2:p(V +), reg r26:V, reg promptData:cls, reg x:*, reg x1:V, reg p3:p(V +), reg filename3:*, reg filename4:V, reg p4:p(V +), reg name9:*, reg name10:V, reg p5:p(V +), reg r30:V |
    mkenv;
    st object = object;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L0(NULL) else L0(filename);
  L0(filename_orDefault):
    st filename = filename_orDefault;
    name_isMissing = missing.0(name);
    if name_isMissing then L1(NULL) else L1(name);
  L1(name_orDefault):
    st name = name_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L2(r1):
    c = `as.logical`(r1);
    if c then L20() else L3();
  L18():
    missing = ldf missing in base;
    r2 = dyn missing(<sym name>);
    goto L2(r2);
  L19():
    r = dyn base(<sym name>);
    goto L2(r);
  L3():
    goto L11();
  L11():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  L20():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L4(r4):
    c2 = `as.logical`(r4);
    if c2 then L24() else L5();
  L12(r15):
    c6 = `as.logical`(r15);
    if c6 then L44() else L13();
  L21():
    object1 = ld object;
    check L23() else D0();
  L22():
    r3 = dyn base1(<sym object>);
    goto L4(r3);
  L41():
    filename1 = ld filename;
    check L43() else D7();
  L42():
    r14 = dyn base5(<sym filename>);
    goto L12(r14);
  D0():
    deopt 4 [object1];
  D7():
    deopt 31 [filename1];
  L5():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L6(object5):
    st name = object5;
    goto L11();
  L13():
    goto L14();
  L14():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  L23():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.character`(object2);
    goto L4(c1);
  L24():
    object3 = ld object;
    check L25() else D1();
  L43():
    filename2 = force? filename1;
    checkMissing(filename2);
    c5 = `==`(filename2, NULL);
    goto L12(c5);
  L44():
    paste0 = ldf paste0;
    check L45() else D8();
  D1():
    deopt 7 [object3];
  D8():
    deopt 35 [];
  L7(r6):
    st name = r6;
    sym3 = ldf `is.name`;
    base3 = ldf `is.name` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L15(r20):
    r22 = `!`(r20);
    c7 = `as.logical`(r22);
    if c7 then L50() else L16();
  L25():
    object4 = force? object3;
    checkMissing(object4);
    goto L6(object4);
  L27():
    substitute = ldf substitute in base;
    r7 = dyn substitute(<sym object>);
    goto L7(r7);
  L28():
    r5 = dyn base2(<sym object>);
    goto L7(r5);
  L45():
    p = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    r17 = dyn paste0(p, ".Rd");
    check L46() else D9();
  L48():
    missing1 = ldf missing in base;
    r21 = dyn missing1(<sym object>);
    goto L15(r21);
  L49():
    r19 = dyn base6(<sym object>);
    goto L15(r19);
  D9():
    deopt 38 [r17];
  L8(r9):
    c4 = `as.logical`(r9);
    if c4 then L32() else L9();
  L16():
    get = ldf get;
    check L53() else D11();
  L17(object9):
    st x = object9;
    promptData = ldf promptData;
    check L55() else D13();
  L29():
    name1 = ld name;
    check L31() else D2();
  L30():
    r8 = dyn base3(<sym name>);
    goto L8(r8);
  L46():
    st filename = r17;
    goto L14();
  L50():
    object7 = ld object;
    check L51() else D10();
  D2():
    deopt 14 [name1];
  D10():
    deopt 46 [object7];
  D11():
    deopt 49 [];
  D13():
    deopt 57 [];
  L9():
    stop = ldf stop;
    check L38() else D5();
  L31():
    name2 = force? name1;
    checkMissing(name2);
    c3 = `is.symbol`(name2);
    goto L8(c3);
  L32():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  L51():
    object8 = force? object7;
    checkMissing(object8);
    goto L17(object8);
  L53():
    p1 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r24 = dyn parent_frame();
      return r24;
    };
    r26 = dyn get[, envir](p1, p2);
    check L54() else D12();
  L55():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p4 = prom<V +>{
      filename3 = ld filename;
      filename4 = force? filename3;
      checkMissing(filename4);
      return filename4;
    };
    p5 = prom<V +>{
      name9 = ld name;
      name10 = force? name9;
      checkMissing(name10);
      return name10;
    };
    r30 = dyn promptData[, filename, name](p3, p4, p5);
    check L56() else D14();
  D5():
    deopt 24 [];
  D12():
    deopt 53 [r26];
  D14():
    deopt 63 [r30];
  L10(r11):
    goto L6(r11);
  L33():
    name3 = ld name;
    check L35() else D3();
  L34():
    r10 = dyn base4(<sym name>);
    goto L10(r10);
  L38():
    r13 = dyn stop("cannot determine a usable name");
    check L39() else D6();
  L54():
    st x = r26;
    goto L17(r26);
  L56():
    popenv;
    return r30;
  D3():
    deopt 19 [name3];
  D6():
    deopt 26 [r13];
  L35():
    name4 = force? name3;
    checkMissing(name4);
    as_character = ldf `as.character` in base;
    r12 = dyn as_character(name4);
    check L36() else D4();
  L39():
    goto L6(r13);
  D4():
    deopt 22 [r12];
  L36():
    goto L10(r12);
  }
}