fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3452071595;
    st getSrcFilename = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3452071595(x, `full.names`, unique) {
  (reg x:*, reg full_names:*, reg unique:*) -+> V { var x:*, var `full.names`:*, reg full_names_isMissing:L, reg full_names_orDefault:*, var unique:*, reg unique_isMissing:L, reg unique_orDefault:*, reg getSrcref:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg srcref:*, reg srcref1:V, reg is_list:cls, reg r4:V, reg c:L, reg sapply:cls, reg srcref2:*, reg srcref3:V, reg p1:p(V +), reg getSrcFilename:*, reg getSrcFilename1:V, reg p2:p(V +), reg full_names1:*, reg full_names2:V, reg p3:p(V +), reg unique1:*, reg unique2:V, reg p4:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg srcref4:*, reg srcref5:V, reg attr:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg srcfile:*, reg srcfile1:V, reg c1:V, reg c2:L, reg character:cls, reg r16:V, reg srcfile2:*, reg srcfile3:V, reg c3:L, reg srcfile5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r17:V, reg full_names3:*, reg full_names4:V, reg c4:L, reg result:*, reg result1:V, reg result2:V, reg basename:cls, reg result3:*, reg result4:V, reg p5:p(V +), reg r19:V, reg unique3:*, reg unique4:V, reg c5:L, reg unique5:cls, reg result5:*, reg result6:V, reg p6:p(V +), reg r21:V, reg result7:*, reg result8:V |
    mkenv;
    st x = x;
    full_names_isMissing = missing.0(full_names);
    if full_names_isMissing then L0(FALSE) else L0(full_names);
  L0(full_names_orDefault):
    st `full.names` = full_names_orDefault;
    unique_isMissing = missing.0(unique);
    if unique_isMissing then L1(TRUE) else L1(unique);
  L1(unique_orDefault):
    st unique = unique_orDefault;
    getSrcref = ldf getSrcref;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn getSrcref(p);
    check L12() else D1();
  D1():
    deopt 3 [r1];
  L12():
    st srcref = r1;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L2(r3):
    c = `as.logical`(r3);
    if c then L17() else L3();
  L13():
    srcref = ld srcref;
    check L15() else D2();
  L14():
    r2 = dyn base(<sym srcref>);
    goto L2(r2);
  D2():
    deopt 7 [srcref];
  L3():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L4():
    full_names3 = ld `full.names`;
    check L37() else D12();
  L15():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    is_list = ldf `is.list` in base;
    r4 = dyn is_list(srcref1);
    check L16() else D3();
  L17():
    sapply = ldf sapply;
    check L18() else D4();
  D3():
    deopt 10 [r4];
  D4():
    deopt 12 [];
  D12():
    deopt 39 [full_names3];
  L5(r12):
    st srcfile = r12;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L16():
    goto L2(r4);
  L18():
    p1 = prom<V +>{
      srcref2 = ld srcref;
      srcref3 = force? srcref2;
      checkMissing(srcref3);
      return srcref3;
    };
    p2 = prom<V +>{
      getSrcFilename = ld getSrcFilename;
      getSrcFilename1 = force? getSrcFilename;
      checkMissing(getSrcFilename1);
      return getSrcFilename1;
    };
    p3 = prom<V +>{
      full_names1 = ld `full.names`;
      full_names2 = force? full_names1;
      checkMissing(full_names2);
      return full_names2;
    };
    p4 = prom<V +>{
      unique1 = ld unique;
      unique2 = force? unique1;
      checkMissing(unique2);
      return unique2;
    };
    r9 = dyn sapply(p1, p2, p3, p4);
    check L19() else D5();
  L21():
    srcref4 = ld srcref;
    check L23() else D6();
  L22():
    r11 = dyn base1(<sym srcref>, "srcfile");
    goto L5(r11);
  L37():
    full_names4 = force? full_names3;
    checkMissing(full_names4);
    c4 = `as.logical`(full_names4);
    if c4 then L38() else L8();
  D5():
    deopt 17 [r9];
  D6():
    deopt 21 [srcref4];
  L6(r15):
    c2 = `as.logical`(r15);
    if c2 then L28() else L7();
  L8():
    basename = ldf basename;
    check L41() else D14();
  L9(result2):
    st result = result2;
    unique3 = ld unique;
    check L43() else D16();
  L19():
    st result = r9;
    goto L4();
  L23():
    srcref5 = force? srcref4;
    checkMissing(srcref5);
    attr = ldf attr in base;
    r13 = dyn attr(srcref5, "srcfile");
    check L24() else D7();
  L25():
    srcfile = ld srcfile;
    check L27() else D8();
  L26():
    r14 = dyn base2(<sym srcfile>);
    goto L6(r14);
  L38():
    result = ld result;
    check L39() else D13();
  D7():
    deopt 25 [r13];
  D8():
    deopt 28 [srcfile];
  D13():
    deopt 41 [result];
  D14():
    deopt 44 [];
  D16():
    deopt 48 [unique3];
  L7():
    srcfile2 = ld srcfile;
    check L32() else D11();
  L24():
    goto L5(r13);
  L27():
    srcfile1 = force? srcfile;
    checkMissing(srcfile1);
    c1 = `==`(srcfile1, NULL);
    goto L6(c1);
  L28():
    character = ldf character;
    check L29() else D9();
  L39():
    result1 = force? result;
    checkMissing(result1);
    goto L9(result1);
  L41():
    p5 = prom<V +>{
      result3 = ld result;
      result4 = force? result3;
      checkMissing(result4);
      return result4;
    };
    r19 = dyn basename(p5);
    check L42() else D15();
  L43():
    unique4 = force? unique3;
    checkMissing(unique4);
    c5 = `as.logical`(unique4);
    if c5 then L44() else L10();
  D9():
    deopt 32 [];
  D11():
    deopt 35 [srcfile2];
  D15():
    deopt 46 [r19];
  L10():
    result7 = ld result;
    check L48() else D19();
  L29():
    r16 = dyn character();
    check L30() else D10();
  L32():
    srcfile3 = force? srcfile2;
    checkMissing(srcfile3);
    c3 = `is.object`(srcfile3);
    if c3 then L34() else L35(srcfile3);
  L42():
    goto L9(r19);
  L44():
    unique5 = ldf unique;
    check L45() else D17();
  D10():
    deopt 33 [r16];
  D17():
    deopt 51 [];
  D19():
    deopt 54 [result7];
  L30():
    st result = r16;
    goto L4();
  L33(dx1):
    st result = dx1;
    goto L4();
  L34():
    dr = tryDispatchBuiltin.1("$", srcfile3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(srcfile5):
    r17 = `$`(srcfile5, <sym filename>);
    goto L33(r17);
  L45():
    p6 = prom<V +>{
      result5 = ld result;
      result6 = force? result5;
      checkMissing(result6);
      return result6;
    };
    r21 = dyn unique5(p6);
    check L46() else D18();
  L48():
    result8 = force? result7;
    checkMissing(result8);
    popenv;
    return result8;
  D18():
    deopt 53 [r21];
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L33(dx);
  L46():
    popenv;
    return r21;
  }
}