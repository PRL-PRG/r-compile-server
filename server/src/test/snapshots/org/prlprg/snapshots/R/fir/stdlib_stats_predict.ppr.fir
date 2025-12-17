fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner350793923;
    st `predict.ppr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner350793923(object, newdata, `...`) {
  (reg object:*, reg newdata:*, reg ddd:dots) -+> V { var object:*, var newdata:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg fitted:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg object3:*, reg object4:V, reg c1:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg c2:V, reg r10:V, reg c3:L, reg as_data_frame:cls, reg newdata1:*, reg newdata2:V, reg p1:p(V +), reg r12:V, reg row_names:cls, reg newdata3:*, reg newdata4:V, reg p2:p(V +), reg r14:V, reg delete_response:cls, reg object7:*, reg object8:V, reg c4:L, reg object10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg p3:p(V +), reg r17:V, reg model_frame:cls, reg Terms:*, reg Terms1:V, reg p4:p(V +), reg newdata5:*, reg newdata6:V, reg p5:p(V +), reg na_omit:*, reg na_omit1:V, reg p6:p(V +), reg object11:*, reg object12:V, reg c5:L, reg object14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r21:V, reg p7:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg Terms2:*, reg Terms3:V, reg attr:cls, reg r28:V, reg c6:V, reg r29:V, reg c7:L, reg _checkMFClasses:cls, reg cl:*, reg cl1:V, reg p8:p(V +), reg m:*, reg m1:V, reg p9:p(V +), reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg row_names1:cls, reg m2:*, reg m3:V, reg p10:p(V +), reg r37:V, reg rn:*, reg rn1:V, reg match:cls, reg r38:V, reg model_matrix:cls, reg Terms4:*, reg Terms5:V, reg p11:p(V +), reg m4:*, reg m5:V, reg p12:p(V +), reg object15:*, reg object16:V, reg c8:L, reg object18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r41:V, reg p13:p(V +), reg r43:V, reg as_matrix:cls, reg newdata7:*, reg newdata8:V, reg p14:p(V +), reg r46:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg r48:V, reg nrow:cls, reg x:*, reg x1:V, reg p15:p(V +), reg r50:V, reg r51:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg x2:*, reg x3:V, reg dimnames:cls, reg r54:V, reg c9:L, reg r56:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __:cls, reg r57:V, reg ncol:cls, reg x4:*, reg x5:V, reg p16:p(V +), reg r59:V, reg object19:*, reg object20:V, reg c10:L, reg r61:V, reg object22:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r63:V, reg dx11:V, reg r64:V, reg r65:V, reg c11:L, reg stop:cls, reg r66:V, reg matrix:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r68:V, reg r69:V, reg keep:*, reg keep1:V, reg length:cls, reg r70:V, reg p17:p(V +), reg object23:*, reg object24:V, reg c12:L, reg object26:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r72:V, reg p18:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r74:V, reg r75:V, reg rn2:*, reg rn3:V, reg object27:*, reg object28:V, reg c13:L, reg object30:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r76:V, reg list:cls, reg r77:V, reg p19:p(V +), reg r79:V, reg matrix1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r80:V, reg r81:V, reg C_pppred:*, reg C_pppred1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r82:V, reg r83:V, reg nrow1:cls, reg x6:*, reg x7:V, reg p20:p(V +), reg r85:V, reg as_integer:cls, reg r86:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r87:V, reg r88:V, reg x8:*, reg x9:V, reg as_double:cls, reg r89:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r90:V, reg r91:V, reg object31:*, reg object32:V, reg c14:L, reg object34:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r92:V, reg as_double1:cls, reg r93:V, reg double:cls, reg nrow2:cls, reg x10:*, reg x11:V, reg p21:p(V +), reg r95:V, reg object35:*, reg object36:V, reg c15:L, reg r97:V, reg object38:V, reg dr18:V, reg dc9:L, reg dx18:V, reg r99:V, reg dx19:V, reg r100:V, reg r101:V, reg p22:p(V +), reg r103:V, reg double1:cls, reg object39:*, reg object40:V, reg c16:L, reg r105:R, reg object42:V, reg dr20:V, reg dc10:L, reg dx20:V, reg r107:R, reg dx21:V, reg r108:V, reg c17:L, reg r110:R, reg dx23:V, reg dr22:V, reg dc11:L, reg dx24:V, reg r112:R, reg dx25:V, reg __1:cls, reg r113:V, reg r114:V, reg p23:p(V +), reg r116:V, reg _Fortran:cls, reg r117:V, reg c18:L, reg r119:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg r120:V, reg p24:p(V +), reg object43:*, reg object44:V, reg c19:L, reg object46:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg r122:V, reg p25:p(V +), reg r124:V, reg l:*, reg c20:L, reg r126:V, reg l2:*, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg keep2:*, reg keep3:V, reg ___:cls, reg r129:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r130:V, reg r131:V, reg res:*, reg res1:V, reg drop:cls, reg r132:V |
    mkenv;
    st object = object;
    st newdata = newdata;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    c = `as.logical`(r1);
    if c then L20() else L1();
  L18():
    missing = ldf missing in base;
    r2 = dyn missing(<sym newdata>);
    goto L0(r2);
  L19():
    r = dyn base(<sym newdata>);
    goto L0(r);
  L1():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L20():
    fitted = ldf fitted;
    check L21() else D0();
  D0():
    deopt 4 [];
  L3(r8):
    r10 = `!`(r8);
    c3 = `as.logical`(r10);
    if c3 then L32() else L4();
  L21():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r4 = dyn fitted(p);
    check L22() else D1();
  L25():
    object3 = ld object;
    check L27() else D2();
  L26():
    r7 = dyn base1(<lang `$`(object, terms)>);
    goto L3(r7);
  D1():
    deopt 6 [r4];
  D2():
    deopt 11 [object3];
  L4():
    as_matrix = ldf `as.matrix`;
    check L60() else D21();
  L10():
    ncol = ldf ncol;
    check L73() else D27();
  L22():
    popenv;
    return r4;
  L27():
    object4 = force? object3;
    checkMissing(object4);
    c1 = `is.object`(object4);
    if c1 then L29() else L30(object4);
  L32():
    as_data_frame = ldf `as.data.frame`;
    check L33() else D3();
  D3():
    deopt 17 [];
  D21():
    deopt 81 [];
  D27():
    deopt 103 [];
  L28(dx1):
    c2 = `==`(dx1, NULL);
    goto L3(c2);
  L29():
    dr = tryDispatchBuiltin.1("$", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(object6):
    r9 = `$`(object6, <sym terms>);
    goto L28(r9);
  L33():
    p1 = prom<V +>{
      newdata1 = ld newdata;
      newdata2 = force? newdata1;
      checkMissing(newdata2);
      return newdata2;
    };
    r12 = dyn as_data_frame(p1);
    check L34() else D4();
  L60():
    p14 = prom<V +>{
      newdata7 = ld newdata;
      newdata8 = force? newdata7;
      checkMissing(newdata8);
      return newdata8;
    };
    r46 = dyn as_matrix(p14);
    check L61() else D22();
  L73():
    p16 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r59 = dyn ncol(p16);
    check L74() else D28();
  D4():
    deopt 19 [r12];
  D22():
    deopt 83 [r46];
  D28():
    deopt 105 [r59];
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L28(dx);
  L34():
    st newdata = r12;
    row_names = ldf `row.names`;
    check L35() else D5();
  L61():
    st x = r46;
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L74():
    object19 = ld object;
    check L75() else D29();
  D5():
    deopt 22 [];
  D29():
    deopt 105 [r59, object19];
  L11(r48):
    st keep = r48;
    sym6 = ldf dimnames;
    base6 = ldf dimnames in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L35():
    p2 = prom<V +>{
      newdata3 = ld newdata;
      newdata4 = force? newdata3;
      checkMissing(newdata4);
      return newdata4;
    };
    r14 = dyn row_names(p2);
    check L36() else D6();
  L62():
    nrow = ldf nrow;
    check L64() else D23();
  L63():
    r47 = dyn base5(<lang nrow(x)>);
    goto L11(r47);
  L75():
    object20 = force? object19;
    checkMissing(object20);
    c10 = `is.object`(object20);
    if c10 then L77() else L78(r59, object20);
  D6():
    deopt 24 [r14];
  D23():
    deopt 87 [];
  L12(r53):
    c9 = `is.object`(r53);
    if c9 then L70() else L71(r53);
  L36():
    st rn = r14;
    delete_response = ldf `delete.response`;
    check L37() else D7();
  L64():
    p15 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r50 = dyn nrow(p15);
    check L65() else D24();
  L66():
    x2 = ld x;
    check L68() else D25();
  L67():
    r52 = dyn base6(<sym x>);
    goto L12(r52);
  L76(r63, dx11):
    r65 = `!=`(r63, dx11);
    c11 = `as.logical`(r65);
    if c11 then L80() else L14();
  L77():
    dr10 = tryDispatchBuiltin.1("$", object20);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L79() else L78(r59, dr10);
  L78(r61, object22):
    r64 = `$`(object22, <sym p>);
    goto L76(r61, r64);
  D7():
    deopt 27 [];
  D24():
    deopt 89 [r50];
  D25():
    deopt 94 [x2];
  L13(dx9):
    st rn = dx9;
    goto L10();
  L14():
    goto L15();
  L15():
    matrix = ldf matrix;
    check L84() else D32();
  L37():
    p3 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      c4 = `is.object`(object8);
      if c4 then L1() else L2(object8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object10):
      r15 = `$`(object10, <sym terms>);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r17 = dyn delete_response(p3);
    check L38() else D8();
  L65():
    r51 = seq_len(r50);
    goto L11(r51);
  L68():
    x3 = force? x2;
    checkMissing(x3);
    dimnames = ldf dimnames in base;
    r54 = dyn dimnames(x3);
    check L69() else D26();
  L70():
    dr8 = tryDispatchBuiltin.1("[[", r53);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L72() else L71(dr8);
  L71(r56):
    __ = ldf `[[` in base;
    r57 = dyn __(r56, 1);
    goto L13(r57);
  L79():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L76(r59, dx10);
  L80():
    stop = ldf stop;
    check L81() else D30();
  D8():
    deopt 29 [r17];
  D26():
    deopt 97 [r54];
  D30():
    deopt 110 [];
  D32():
    deopt 116 [];
  L38():
    st Terms = r17;
    model_frame = ldf `model.frame`;
    check L39() else D9();
  L69():
    goto L12(r54);
  L72():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L13(dx8);
  L81():
    r66 = dyn stop("wrong number of columns in 'x'");
    check L82() else D31();
  L84():
    p17 = prom<V +>{
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r69):
      return r69;
    L1():
      keep = ld keep;
      keep1 = force? keep;
      checkMissing(keep1);
      length = ldf length in base;
      r70 = dyn length(keep1);
      goto L0(r70);
    L2():
      r68 = dyn base7(<sym keep>);
      goto L0(r68);
    };
    p18 = prom<V +>{
      object23 = ld object;
      object24 = force? object23;
      checkMissing(object24);
      c12 = `is.object`(object24);
      if c12 then L1() else L2(object24);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", object24);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object26):
      r72 = `$`(object26, <sym q>);
      goto L0(r72);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p19 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      rn2 = ld rn;
      rn3 = force? rn2;
      checkMissing(rn3);
      object27 = ld object;
      object28 = force? object27;
      checkMissing(object28);
      c13 = `is.object`(object28);
      if c13 then L4() else L5(object28);
    L2():
      r74 = dyn base8(<sym rn>, <lang `$`(object, ynames)>);
      goto L0(r74);
    L3(dx15):
      list = ldf list in base;
      r77 = dyn list(rn3, dx15);
      goto L0(r77);
    L4():
      dr14 = tryDispatchBuiltin.1("$", object28);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L6() else L5(dr14);
    L5(object30):
      r76 = `$`(object30, <sym ynames>);
      goto L3(r76);
    L6():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L3(dx14);
    };
    r79 = dyn matrix[, , , dimnames](NA_LGL, p17, p18, p19);
    check L85() else D33();
  D9():
    deopt 32 [];
  D31():
    deopt 112 [r66];
  D33():
    deopt 122 [r79];
  L39():
    p4 = prom<V +>{
      Terms = ld Terms;
      Terms1 = force? Terms;
      checkMissing(Terms1);
      return Terms1;
    };
    p5 = prom<V +>{
      newdata5 = ld newdata;
      newdata6 = force? newdata5;
      checkMissing(newdata6);
      return newdata6;
    };
    p6 = prom<V +>{
      na_omit = ld `na.omit`;
      na_omit1 = force? na_omit;
      checkMissing(na_omit1);
      return na_omit1;
    };
    p7 = prom<V +>{
      object11 = ld object;
      object12 = force? object11;
      checkMissing(object12);
      c5 = `is.object`(object12);
      if c5 then L1() else L2(object12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object14):
      r21 = `$`(object14, <sym xlevels>);
      goto L0(r21);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r23 = dyn model_frame[, , `na.action`, xlev](p4, p5, p6, p7);
    check L40() else D10();
  L82():
    goto L15();
  L85():
    st res = r79;
    matrix1 = ldf matrix;
    check L86() else D34();
  D10():
    deopt 39 [r23];
  D34():
    deopt 125 [];
  L40():
    st m = r23;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L86():
    p24 = prom<V +>{
      sym9 = ldf `.Fortran`;
      base9 = ldf `.Fortran` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L0(r81):
      c18 = `is.object`(r81);
      if c18 then L17() else L18(r81);
    L4():
      C_pppred = ld C_pppred;
      C_pppred1 = force? C_pppred;
      checkMissing(C_pppred1);
      sym10 = ldf `as.integer`;
      base10 = ldf `as.integer` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L6() else L7();
    L5():
      r80 = dyn base9[, , , , y, ](<sym C_pppred>, <lang as.integer(nrow(x))>, <lang as.double(x)>, <lang as.double(`$`(object, smod))>, <lang double(`*`(nrow(x), `$`(object, q)))>, <lang double(`*`(2.0, `[`(`$`(object, smod), 4)))>);
      goto L0(r80);
    L1(r83):
      sym11 = ldf `as.double`;
      base11 = ldf `as.double` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L8() else L9();
    L6():
      nrow1 = ldf nrow;
      p20 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r85 = dyn nrow1(p20);
      as_integer = ldf `as.integer` in base;
      r86 = dyn as_integer(r85);
      goto L1(r86);
    L7():
      r82 = dyn base10(<lang nrow(x)>);
      goto L1(r82);
    L16(dx27):
      return dx27;
    L17():
      dr24 = tryDispatchBuiltin.1("$", r81);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L19() else L18(dr24);
    L18(r119):
      r120 = `$`(r119, <sym y>);
      goto L16(r120);
    L2(r88):
      sym12 = ldf `as.double`;
      base12 = ldf `as.double` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L10() else L11();
    L8():
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      as_double = ldf `as.double` in base;
      r89 = dyn as_double(x9);
      goto L2(r89);
    L9():
      r87 = dyn base11(<sym x>);
      goto L2(r87);
    L19():
      dx26 = getTryDispatchBuiltinValue(dr24);
      goto L16(dx26);
    L3(r91):
      double = ldf double;
      p22 = prom<V +>{
        nrow2 = ldf nrow;
        p21 = prom<V +>{
          x10 = ld x;
          x11 = force? x10;
          checkMissing(x11);
          return x11;
        };
        r95 = dyn nrow2(p21);
        object35 = ld object;
        object36 = force? object35;
        checkMissing(object36);
        c15 = `is.object`(object36);
        if c15 then L1() else L2(r95, object36);
      L0(r99, dx19):
        r101 = `*`(r99, dx19);
        return r101;
      L1():
        dr18 = tryDispatchBuiltin.1("$", object36);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(r95, dr18);
      L2(r97, object38):
        r100 = `$`(object38, <sym q>);
        goto L0(r97, r100);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L0(r95, dx18);
      };
      r103 = dyn double(p22);
      double1 = ldf double;
      p23 = prom<V +>{
        object39 = ld object;
        object40 = force? object39;
        checkMissing(object40);
        c16 = `is.object`(object40);
        if c16 then L2() else L3(2.0, object40);
      L1(r107, dx21):
        c17 = `is.object`(dx21);
        if c17 then L5() else L6(r107, dx21);
      L2():
        dr20 = tryDispatchBuiltin.1("$", object40);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L4() else L3(2.0, dr20);
      L3(r105, object42):
        r108 = `$`(object42, <sym smod>);
        goto L1(r105, r108);
      L0(r112, dx25):
        r114 = `*`(r112, dx25);
        return r114;
      L4():
        dx20 = getTryDispatchBuiltinValue(dr20);
        goto L1(2.0, dx20);
      L5():
        dr22 = tryDispatchBuiltin.1("[", dx21);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L7() else L6(r107, dr22);
      L6(r110, dx23):
        __1 = ldf `[` in base;
        r113 = dyn __1(dx23, 4);
        goto L0(r110, r113);
      L7():
        dx24 = getTryDispatchBuiltinValue(dr22);
        goto L0(r107, dx24);
      };
      r116 = dyn double1(p23);
      _Fortran = ldf `.Fortran` in base;
      r117 = dyn _Fortran(C_pppred1, r83, r88, r91, r103, r116);
      goto L0(r117);
    L10():
      object31 = ld object;
      object32 = force? object31;
      checkMissing(object32);
      c14 = `is.object`(object32);
      if c14 then L13() else L14(object32);
    L11():
      r90 = dyn base12(<lang `$`(object, smod)>);
      goto L3(r90);
    L12(dx17):
      as_double1 = ldf `as.double` in base;
      r93 = dyn as_double1(dx17);
      goto L3(r93);
    L13():
      dr16 = tryDispatchBuiltin.1("$", object32);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L15() else L14(dr16);
    L14(object34):
      r92 = `$`(object34, <sym smod>);
      goto L12(r92);
    L15():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L12(dx16);
    };
    p25 = prom<V +>{
      object43 = ld object;
      object44 = force? object43;
      checkMissing(object44);
      c19 = `is.object`(object44);
      if c19 then L1() else L2(object44);
    L0(dx29):
      return dx29;
    L1():
      dr26 = tryDispatchBuiltin.1("$", object44);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(object46):
      r122 = `$`(object46, <sym q>);
      goto L0(r122);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx28);
    };
    r124 = dyn matrix1[, ncol](p24, p25);
    check L87() else D35();
  D35():
    deopt 129 [r124];
  L5(r25):
    r29 = `!`(r25);
    c7 = `as.logical`(r29);
    if c7 then L47() else L7();
  L41():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L42():
    r24 = dyn base2(<lang `<-`(cl, attr(Terms, "dataClasses"))>);
    goto L5(r24);
  L87():
    l = ld res;
    c20 = `is.object`(l);
    if c20 then L88() else L89(r124, l);
  L6(r27):
    st cl = r27;
    c6 = `==`(r27, NULL);
    goto L5(c6);
  L7():
    goto L8();
  L8():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L16(dx31):
    st res = dx31;
    sym13 = ldf drop;
    base13 = ldf drop in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L92() else L93();
  L43():
    Terms2 = ld Terms;
    check L45() else D11();
  L44():
    r26 = dyn base3(<sym Terms>, "dataClasses");
    goto L6(r26);
  L47():
    _checkMFClasses = ldf `.checkMFClasses`;
    check L48() else D13();
  L88():
    dr28 = tryDispatchBuiltin.0("[<-", l, r124);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L90() else L89(r124, dr28);
  L89(r126, l2):
    keep2 = ld keep;
    check L91() else D36();
  D11():
    deopt 44 [Terms2];
  D13():
    deopt 53 [];
  D36():
    deopt 131 [r126, l2, r124, keep2];
  L9(r35):
    st keep = r35;
    model_matrix = ldf `model.matrix`;
    check L57() else D19();
  L17(r131):
    popenv;
    return r131;
  L45():
    Terms3 = force? Terms2;
    checkMissing(Terms3);
    attr = ldf attr in base;
    r28 = dyn attr(Terms3, "dataClasses");
    check L46() else D12();
  L48():
    p8 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p9 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r32 = dyn _checkMFClasses(p8, p9);
    check L49() else D14();
  L51():
    row_names1 = ldf `row.names`;
    check L53() else D15();
  L52():
    r34 = dyn base4(<lang row.names(m)>, <sym rn>);
    goto L9(r34);
  L90():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L16(dx30);
  L91():
    keep3 = force? keep2;
    ___ = ldf `[<-` in base;
    r129 = dyn ___(l, keep3, <missing>, r124);
    goto L16(r129);
  L92():
    res = ld res;
    check L94() else D37();
  L93():
    r130 = dyn base13(<sym res>);
    goto L17(r130);
  D12():
    deopt 48 [r28];
  D14():
    deopt 56 [r32];
  D15():
    deopt 62 [];
  D19():
    deopt 73 [];
  D37():
    deopt 139 [res];
  L46():
    goto L6(r28);
  L49():
    goto L8();
  L53():
    p10 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r37 = dyn row_names1(p10);
    check L54() else D16();
  L57():
    p11 = prom<V +>{
      Terms4 = ld Terms;
      Terms5 = force? Terms4;
      checkMissing(Terms5);
      return Terms5;
    };
    p12 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p13 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      c8 = `is.object`(object16);
      if c8 then L1() else L2(object16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object18):
      r41 = `$`(object18, <sym contrasts>);
      goto L0(r41);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r43 = dyn model_matrix[, , `contrasts.arg`](p11, p12, p13);
    check L58() else D20();
  L94():
    res1 = force? res;
    checkMissing(res1);
    drop = ldf drop in base;
    r132 = dyn drop(res1);
    check L95() else D38();
  D16():
    deopt 64 [r37];
  D20():
    deopt 78 [r43];
  D38():
    deopt 142 [r132];
  L54():
    rn = ld rn;
    check L55() else D17();
  L58():
    st x = r43;
    goto L10();
  L95():
    goto L17(r132);
  D17():
    deopt 65 [rn];
  L55():
    rn1 = force? rn;
    checkMissing(rn1);
    match = ldf match in base;
    r38 = dyn match(r37, rn1, NA_INT, NULL);
    check L56() else D18();
  D18():
    deopt 70 [r38];
  L56():
    goto L9(r38);
  }
}