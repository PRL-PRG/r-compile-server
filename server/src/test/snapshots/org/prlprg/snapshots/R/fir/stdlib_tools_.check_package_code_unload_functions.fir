fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_package_code_unload_functions` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg r:cls, reg _find_calls_in_package_code:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg _get_unload_function_calls_in_file:*, reg _get_unload_function_calls_in_file1:V, reg p1:p(V +), reg r3:V, reg unlist:cls, reg lapply:cls, reg calls:*, reg calls1:V, reg p2:p(V +), reg __:*, reg __1:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg Filter:cls, reg length:*, reg length1:V, reg p5:p(V +), reg lapply1:cls, reg calls2:*, reg calls3:V, reg p6:p(V +), reg r11:cls, reg p7:p(V +), reg r13:V, reg p8:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg LL:*, reg LL1:V, reg length2:cls, reg r18:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg c5:L, reg r20:V, reg tryCatch:cls, reg parseNamespaceFile:cls, reg basename:cls, reg dir3:*, reg dir4:V, reg p9:p(V +), reg r22:V, reg p10:p(V +), reg dirname:cls, reg dir5:*, reg dir6:V, reg p11:p(V +), reg r25:V, reg p12:p(V +), reg r27:V, reg p13:p(V +), reg identity:*, reg identity1:V, reg p14:p(V +), reg r30:V, reg inherits:cls, reg r31:V, reg r32:V, reg c6:L, reg c7:V, reg c9:L, reg intersect:cls, reg code_objs:*, reg code_objs1:V, reg p15:p(V +), reg nsInfo:*, reg nsInfo1:V, reg c10:L, reg nsInfo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r34:V, reg p16:p(V +), reg r36:V, reg nsInfo4:*, reg nsInfo5:V, reg c11:L, reg nsInfo7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r37:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c12:L, reg x:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r38:V, reg i7:I, reg r39:V, reg OK:*, reg OK1:V, reg grep:cls, reg p17:*, reg p18:V, reg p19:p(V +), reg code_objs2:*, reg code_objs3:V, reg p20:p(V +), reg r42:V, reg c13:cls, reg r43:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg OK2:*, reg OK3:V, reg length3:cls, reg r46:V, reg r47:V, reg c14:L, reg l1:*, reg attr__:cls, reg r48:V, reg r49:V, reg l2:*, reg class__:cls, reg r51:V, reg calls4:*, reg calls5:V |
    mkenv;
    st dir = dir;
    st bad_call_names = "library.dynam.unload";
    r = clos inner785687786;
    st `.check_unload_function` = r;
    _find_calls_in_package_code = ldf `.find_calls_in_package_code`;
    check L11() else D0();
  D0():
    deopt 7 [];
  L11():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p1 = prom<V +>{
      _get_unload_function_calls_in_file = ld `.get_unload_function_calls_in_file`;
      _get_unload_function_calls_in_file1 = force? _get_unload_function_calls_in_file;
      checkMissing(_get_unload_function_calls_in_file1);
      return _get_unload_function_calls_in_file1;
    };
    r3 = dyn _find_calls_in_package_code[, `.worker`](p, p1);
    check L12() else D1();
  D1():
    deopt 11 [r3];
  L12():
    st calls = r3;
    unlist = ldf unlist;
    check L13() else D2();
  D2():
    deopt 14 [];
  L13():
    p4 = prom<V +>{
      lapply = ldf lapply;
      p2 = prom<V +>{
        calls = ld calls;
        calls1 = force? calls;
        checkMissing(calls1);
        return calls1;
      };
      p3 = prom<V +>{
        __ = ld `[[`;
        __1 = force? __;
        checkMissing(__1);
        return __1;
      };
      r6 = dyn lapply(p2, p3, ".Last.lib");
      return r6;
    };
    r8 = dyn unlist(p4);
    check L14() else D3();
  D3():
    deopt 16 [r8];
  L14():
    st LL = r8;
    Filter = ldf Filter;
    check L15() else D4();
  D4():
    deopt 19 [];
  L15():
    p5 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p8 = prom<V +>{
      lapply1 = ldf lapply;
      p6 = prom<V +>{
        calls2 = ld calls;
        calls3 = force? calls2;
        checkMissing(calls3);
        return calls3;
      };
      p7 = prom<V +>{
        r11 = clos inner3708401697;
        return r11;
      };
      r13 = dyn lapply1(p6, p7);
      return r13;
    };
    r15 = dyn Filter(p5, p8);
    check L16() else D5();
  D5():
    deopt 22 [r15];
  L16():
    st calls = r15;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r17):
    c = `as.logical`(r17);
    if c then L21() else L1(c);
  L17():
    LL = ld LL;
    check L19() else D6();
  L18():
    r16 = dyn base(<sym LL>);
    goto L0(r16);
  D6():
    deopt 26 [LL];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L28() else L3();
  L19():
    LL1 = force? LL;
    checkMissing(LL1);
    length2 = ldf length in base;
    r18 = dyn length2(LL1);
    check L20() else D7();
  L21():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  D7():
    deopt 29 [r18];
  L2(c5, r20):
    r32 = `!`(r20);
    c6 = `as.logical`(r32);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    goto L10();
  L10():
    l2 = ld calls;
    class__ = ldf `class<-`;
    check L52() else D22();
  L20():
    goto L0(r18);
  L22():
    tryCatch = ldf tryCatch;
    check L24() else D8();
  L23():
    r19 = dyn base1(<lang tryCatch(`<-`(nsInfo, parseNamespaceFile(basename(dir), dirname(dir))), error=identity)>, "error");
    goto L2(c, r19);
  L28():
    st code_objs = ".Last.lib";
    intersect = ldf intersect;
    check L29() else D11();
  D8():
    deopt 33 [c];
  D11():
    deopt 48 [];
  D22():
    deopt 95 ["check_package_code_unload_functions", l2, "check_package_code_unload_functions"];
  L24():
    p13 = prom<V +>{
      parseNamespaceFile = ldf parseNamespaceFile;
      p10 = prom<V +>{
        basename = ldf basename;
        p9 = prom<V +>{
          dir3 = ld dir;
          dir4 = force? dir3;
          checkMissing(dir4);
          return dir4;
        };
        r22 = dyn basename(p9);
        return r22;
      };
      p12 = prom<V +>{
        dirname = ldf dirname;
        p11 = prom<V +>{
          dir5 = ld dir;
          dir6 = force? dir5;
          checkMissing(dir6);
          return dir6;
        };
        r25 = dyn dirname(p11);
        return r25;
      };
      r27 = dyn parseNamespaceFile(p10, p12);
      st nsInfo = r27;
      invisible.0();
      return r27;
    };
    p14 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r30 = dyn tryCatch[, error](p13, p14);
    check L25() else D9();
  L29():
    p15 = prom<V +>{
      code_objs = ld code_objs;
      code_objs1 = force? code_objs;
      checkMissing(code_objs1);
      return code_objs1;
    };
    p16 = prom<V +>{
      nsInfo = ld nsInfo;
      nsInfo1 = force? nsInfo;
      checkMissing(nsInfo1);
      c10 = `is.object`(nsInfo1);
      if c10 then L1() else L2(nsInfo1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", nsInfo1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(nsInfo3):
      r34 = `$`(nsInfo3, <sym exports>);
      goto L0(r34);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r36 = dyn intersect(p15, p16);
    check L30() else D12();
  L52():
    r51 = dyn class__(l2, NULL, "check_package_code_unload_functions");
    check L53() else D23();
  D9():
    deopt 37 [c, r30];
  D12():
    deopt 51 [r36];
  D23():
    deopt 97 ["check_package_code_unload_functions", r51];
  L25():
    inherits = ldf inherits in base;
    r31 = dyn inherits(r30, "error", FALSE);
    check L26() else D10();
  L30():
    st OK = r36;
    nsInfo4 = ld nsInfo;
    check L31() else D13();
  L53():
    st calls = r51;
    calls4 = ld calls;
    check L54() else D24();
  D10():
    deopt 41 [c, r31];
  D13():
    deopt 53 [nsInfo4];
  D24():
    deopt 99 [calls4];
  L26():
    goto L2(c, r31);
  L31():
    nsInfo5 = force? nsInfo4;
    checkMissing(nsInfo5);
    c11 = `is.object`(nsInfo5);
    if c11 then L33() else L34(nsInfo5);
  L54():
    calls5 = force? calls4;
    checkMissing(calls5);
    popenv;
    return calls5;
  L32(dx3):
    s = toForSeq(dx3);
    l = length(s);
    i = 0;
    goto L4(i);
  L33():
    dr2 = tryDispatchBuiltin.1("$", nsInfo5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(dr2);
  L34(nsInfo7):
    r37 = `$`(nsInfo7, <sym exportPatterns>);
    goto L32(r37);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c12 = `<`.1(l, i2);
    if c12 then L36() else L6();
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L32(dx2);
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L36():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L5(i7, r39):
    st OK = r39;
    goto L4(i7);
  L7(r45):
    r47 = `!`(r45);
    c14 = `as.logical`(r47);
    if c14 then L47() else L8();
  L37():
    OK = ld OK;
    check L39() else D14();
  L38():
    r38 = dyn base2(<sym OK>, <lang grep(p, code_objs, value=TRUE)>);
    goto L5(i2, r38);
  L43():
    OK2 = ld OK;
    check L45() else D18();
  L44():
    r44 = dyn base3(<sym OK>);
    goto L7(r44);
  D14():
    deopt 58 [i2, OK];
  D18():
    deopt 75 [OK2];
  L8():
    goto L9(NULL);
  L9(r49):
    goto L10();
  L39():
    OK1 = force? OK;
    checkMissing(OK1);
    grep = ldf grep;
    check L40() else D15();
  L45():
    OK3 = force? OK2;
    checkMissing(OK3);
    length3 = ldf length in base;
    r46 = dyn length3(OK3);
    check L46() else D19();
  L47():
    l1 = ld calls;
    attr__ = ldf `attr<-`;
    check L48() else D20();
  D15():
    deopt 61 [i2];
  D19():
    deopt 78 [r46];
  D20():
    deopt 83 [TRUE, l1, TRUE];
  L40():
    p19 = prom<V +>{
      p17 = ld p;
      p18 = force? p17;
      checkMissing(p18);
      return p18;
    };
    p20 = prom<V +>{
      code_objs2 = ld code_objs;
      code_objs3 = force? code_objs2;
      checkMissing(code_objs3);
      return code_objs3;
    };
    r42 = dyn grep[, , value](p19, p20, TRUE);
    check L41() else D16();
  L46():
    goto L7(r46);
  L48():
    r48 = dyn attr__(l1, NULL, ".Last.lib", TRUE);
    check L49() else D21();
  D16():
    deopt 66 [i2, r42];
  D21():
    deopt 86 [TRUE, r48];
  L41():
    c13 = ldf c in base;
    r43 = dyn c13(OK1, r42);
    check L42() else D17();
  L49():
    st calls = r48;
    goto L9(TRUE);
  D17():
    deopt 68 [i2, r43];
  L42():
    goto L5(i2, r43);
  }
}
fun inner785687786(fcode, fname) {
  (reg fcode:*, reg fname:*) -+> V { var fcode:*, var fname:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg fcode1:*, reg fcode2:V, reg c:L, reg fcode4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg names:cls, reg r6:V, reg _notin_:cls, reg nms:*, reg nms1:V, reg p:p(V +), reg r8:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c6:L, reg r10:V, reg nms2:*, reg nms3:V, reg length:cls, reg r11:V, reg r12:V, reg c7:L, reg c8:L, reg c9:V, reg startsWith:cls, reg nms4:*, reg nms5:V, reg p1:p(V +), reg r14:V, reg r15:V, reg c12:L, reg c13:V, reg c16:L, reg c17:V, reg c19:L, reg nms6:*, reg nms7:V, reg l:*, reg c20:L, reg nms9:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg nms11:V, reg dx3:V, reg r16:V, reg _find_calls:cls, reg fcode5:*, reg fcode6:V, reg c21:L, reg fcode8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg calls:*, reg calls1:V, reg length1:cls, reg r22:V, reg r23:V, reg c22:L, reg out:*, reg out1:V, reg _call_names:cls, reg calls2:*, reg calls3:V, reg p3:p(V +), reg r27:V, reg _in_:cls, reg cnames:*, reg cnames1:V, reg p4:p(V +), reg bad_call_names:*, reg bad_call_names1:V, reg p5:p(V +), reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg ind:*, reg ind1:V, reg any:cls, reg r33:V, reg c23:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg calls4:*, reg calls5:V, reg c24:L, reg calls7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind2:*, reg ind3:V, reg __2:cls, reg r36:V, reg cnames2:*, reg cnames3:V, reg c25:L, reg cnames5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind4:*, reg ind5:V, reg __3:cls, reg r37:V, reg list1:cls, reg r38:V, reg l3:*, reg c26:L, reg r40:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r42:V, reg dx11:V, reg r43:V, reg out2:*, reg out3:V |
    mkenv;
    st fcode = fcode;
    st fname = fname;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    st out = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L17():
    list = ldf list in base;
    r2 = dyn list();
    check L19() else D0();
  L18():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r4):
    st nms = r4;
    _notin_ = ldf `%notin%`;
    check L27() else D3();
  L19():
    goto L0(r2);
  L20():
    fcode1 = ld fcode;
    check L22() else D1();
  L21():
    r3 = dyn base1(<lang `[[`(fcode, 2)>);
    goto L1(r3);
  D1():
    deopt 7 [fcode1];
  D3():
    deopt 16 [];
  L22():
    fcode2 = force? fcode1;
    checkMissing(fcode2);
    c = `is.object`(fcode2);
    if c then L23() else L24(fcode2);
  L27():
    p = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r8 = dyn _notin_("...", p);
    check L28() else D4();
  D4():
    deopt 19 [r8];
  L2(dx1):
    names = ldf names in base;
    r6 = dyn names(dx1);
    check L26() else D2();
  L23():
    dr = tryDispatchBuiltin.1("[[", fcode2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(fcode4):
    __ = ldf `[[` in base;
    r5 = dyn __(fcode4, 2);
    goto L2(r5);
  L28():
    c1 = `as.logical`(r8);
    if c1 then L29() else L3(c1);
  D2():
    deopt 13 [r6];
  L3(c3):
    c19 = `as.logical`(c3);
    if c19 then L39() else L6();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L26():
    goto L1(r6);
  L29():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L4(c6, r10):
    r12 = `!=`(r10, 1);
    c7 = `as.logical`(r12);
    if c7 then L5(c6, c7) else L34();
  L6():
    goto L7();
  L7():
    _find_calls = ldf `.find_calls`;
    check L46() else D10();
  L30():
    nms2 = ld nms;
    check L32() else D5();
  L31():
    r9 = dyn base2(<sym nms>);
    goto L4(c1, r9);
  L39():
    nms6 = ld nms;
    check L40() else D9();
  D5():
    deopt 22 [c1, nms2];
  D9():
    deopt 36 [nms6];
  D10():
    deopt 44 [];
  L5(c8, c9):
    c16 = `as.logical`(c9);
    c17 = `&&`(c8, c16);
    goto L3(c17);
  L32():
    nms3 = force? nms2;
    checkMissing(nms3);
    length = ldf length in base;
    r11 = dyn length(nms3);
    check L33() else D6();
  L34():
    startsWith = ldf startsWith;
    check L35() else D7();
  L40():
    nms7 = force? nms6;
    checkMissing(nms7);
    l = ld out;
    c20 = `is.object`(l);
    if c20 then L42() else L43(nms7, l);
  L46():
    p2 = prom<V +>{
      fcode5 = ld fcode;
      fcode6 = force? fcode5;
      checkMissing(fcode6);
      c21 = `is.object`(fcode6);
      if c21 then L1() else L2(fcode6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", fcode6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(fcode8):
      __1 = ldf `[[` in base;
      r17 = dyn __1(fcode8, 3);
      goto L0(r17);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r19 = dyn _find_calls[, recursive](p2, TRUE);
    check L47() else D11();
  D6():
    deopt 25 [c1, r11];
  D7():
    deopt 29 [c6, c7];
  D11():
    deopt 48 [r19];
  L33():
    goto L4(c1, r11);
  L35():
    p1 = prom<V +>{
      nms4 = ld nms;
      nms5 = force? nms4;
      checkMissing(nms5);
      return nms5;
    };
    r14 = dyn startsWith(p1, "lib");
    check L36() else D8();
  L41(nms11, dx3):
    st out = dx3;
    goto L7();
  L42():
    dr2 = tryDispatchBuiltin.0("$<-", l, nms7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(nms7, dr2);
  L43(nms9, l2):
    r16 = `$<-`(l2, <sym bad_arg_names>, nms7);
    goto L41(nms9, r16);
  L47():
    st calls = r19;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  D8():
    deopt 32 [c6, c7, r14];
  L8(r21):
    r23 = `!`(r21);
    c22 = `as.logical`(r23);
    if c22 then L52() else L9();
  L36():
    r15 = `!`(r14);
    c12 = `as.logical`(r15);
    c13 = `||`(c7, c12);
    goto L5(c6, c13);
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L41(nms7, dx2);
  L48():
    calls = ld calls;
    check L50() else D12();
  L49():
    r20 = dyn base3(<sym calls>);
    goto L8(r20);
  D12():
    deopt 52 [calls];
  L9():
    _call_names = ldf `.call_names`;
    check L56() else D15();
  L50():
    calls1 = force? calls;
    checkMissing(calls1);
    length1 = ldf length in base;
    r22 = dyn length1(calls1);
    check L51() else D13();
  L52():
    out = ld out;
    check L53() else D14();
  D13():
    deopt 55 [r22];
  D14():
    deopt 57 [out];
  D15():
    deopt 63 [];
  L51():
    goto L8(r22);
  L53():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  L56():
    p3 = prom<V +>{
      calls2 = ld calls;
      calls3 = force? calls2;
      checkMissing(calls3);
      return calls3;
    };
    r27 = dyn _call_names(p3);
    check L57() else D16();
  D16():
    deopt 65 [r27];
  L57():
    st cnames = r27;
    _in_ = ldf `%in%`;
    check L58() else D17();
  D17():
    deopt 68 [];
  L58():
    p4 = prom<V +>{
      cnames = ld cnames;
      cnames1 = force? cnames;
      checkMissing(cnames1);
      return cnames1;
    };
    p5 = prom<V +>{
      bad_call_names = ld bad_call_names;
      bad_call_names1 = force? bad_call_names;
      checkMissing(bad_call_names1);
      return bad_call_names1;
    };
    r30 = dyn _in_(p4, p5);
    check L59() else D18();
  D18():
    deopt 71 [r30];
  L59():
    st ind = r30;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L11(r32):
    c23 = `as.logical`(r32);
    if c23 then L64() else L12();
  L60():
    ind = ld ind;
    check L62() else D19();
  L61():
    r31 = dyn base4(<sym ind>);
    goto L11(r31);
  D19():
    deopt 75 [ind];
  L12():
    goto L16();
  L16():
    out2 = ld out;
    check L83() else D26();
  L62():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r33 = dyn any(ind1);
    check L63() else D20();
  L64():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L65() else L66();
  D20():
    deopt 78 [r33];
  D26():
    deopt 100 [out2];
  L13(r35):
    l3 = ld out;
    c26 = `is.object`(l3);
    if c26 then L79() else L80(r35, l3);
  L63():
    goto L11(r33);
  L65():
    calls4 = ld calls;
    check L67() else D21();
  L66():
    r34 = dyn base5[calls, names](<lang `[`(calls, ind)>, <lang `[`(cnames, ind)>);
    goto L13(r34);
  L83():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  D21():
    deopt 81 [calls4];
  L67():
    calls5 = force? calls4;
    checkMissing(calls5);
    c24 = `is.object`(calls5);
    if c24 then L68() else L69(calls5);
  L78(r42, dx11):
    st out = dx11;
    goto L16();
  L79():
    dr10 = tryDispatchBuiltin.0("$<-", l3, r35);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L81() else L80(r35, dr10);
  L80(r40, l5):
    r43 = `$<-`(l5, <sym bad_calls>, r35);
    goto L78(r40, r43);
  L14(dx7):
    cnames2 = ld cnames;
    check L72() else D23();
  L68():
    dr6 = tryDispatchBuiltin.1("[", calls5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L70() else L69(dr6);
  L69(calls7):
    ind2 = ld ind;
    check L71() else D22();
  L81():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L78(r35, dx10);
  D22():
    deopt 83 [calls7, ind2];
  D23():
    deopt 87 [cnames2];
  L70():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L14(dx6);
  L71():
    ind3 = force? ind2;
    __2 = ldf `[` in base;
    r36 = dyn __2(calls7, ind3);
    goto L14(r36);
  L72():
    cnames3 = force? cnames2;
    checkMissing(cnames3);
    c25 = `is.object`(cnames3);
    if c25 then L73() else L74(cnames3);
  L15(dx9):
    list1 = ldf list in base;
    r38 = dyn list1(dx7, dx9);
    check L77() else D25();
  L73():
    dr8 = tryDispatchBuiltin.1("[", cnames3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L75() else L74(dr8);
  L74(cnames5):
    ind4 = ld ind;
    check L76() else D24();
  D24():
    deopt 89 [cnames5, ind4];
  D25():
    deopt 94 [r38];
  L75():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L15(dx8);
  L76():
    ind5 = force? ind4;
    __3 = ldf `[` in base;
    r37 = dyn __3(cnames5, ind5);
    goto L15(r37);
  L77():
    goto L13(r38);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg Filter:cls, reg length:*, reg length1:V, reg p:p(V +), reg Map:cls, reg _check_unload_function:*, reg _check_unload_function1:V, reg p1:p(V +), reg e1:*, reg e2:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg e3:*, reg e4:V, reg names:cls, reg r5:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:V |
    mkenv;
    st e = e;
    Filter = ldf Filter;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p4 = prom<V +>{
      Map = ldf Map;
      p1 = prom<V +>{
        _check_unload_function = ld `.check_unload_function`;
        _check_unload_function1 = force? _check_unload_function;
        checkMissing(_check_unload_function1);
        return _check_unload_function1;
      };
      p2 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      p3 = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r4):
        return r4;
      L1():
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        names = ldf names in base;
        r5 = dyn names(e4);
        goto L0(r5);
      L2():
        r3 = dyn base(<sym e>);
        goto L0(r3);
      };
      r7 = dyn Map(p1, p2, p3);
      return r7;
    };
    r9 = dyn Filter(p, p4);
    check L1() else D1();
  D1():
    deopt 4 [r9];
  L1():
    popenv;
    return r9;
  }
}