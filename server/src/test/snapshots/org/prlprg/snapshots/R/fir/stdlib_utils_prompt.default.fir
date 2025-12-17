fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner931770822;
    st `prompt.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner931770822(object, filename, name, `force.function`, `...`) {
  (reg object:*, reg filename:*, reg name:*, reg force_function:*, reg ddd:dots) -+> V { var object:*, var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, var `force.function`:*, reg force_function_isMissing:L, reg force_function_orDefault:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg object1:*, reg object2:V, reg c1:L, reg c2:L, reg object3:*, reg object4:V, reg object5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg substitute:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg name1:*, reg name2:V, reg c3:L, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r11:V, reg r12:V, reg name3:*, reg name4:V, reg as_character:cls, reg r13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r14:V, reg r15:V, reg name5:*, reg name6:V, reg is_call:cls, reg r16:V, reg c5:L, reg c7:V, reg _in_:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r17:V, reg r18:V, reg name7:*, reg name8:V, reg c8:L, reg name10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r19:V, reg as_character1:cls, reg r20:V, reg p:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r22:V, reg r23:V, reg c9:cls, reg r24:V, reg p1:p(V +), reg r26:V, reg c10:L, reg c11:V, reg c13:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r27:V, reg r28:V, reg name11:*, reg name12:V, reg as_character2:cls, reg r29:V, reg name13:*, reg name14:V, reg c14:L, reg name16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r30:V, reg name19:V, reg r31:V, reg name20:*, reg name21:V, reg length:cls, reg r32:V, reg __1:cls, reg r33:V, reg stop:cls, reg r34:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r35:V, reg r36:V, reg filename1:*, reg filename2:V, reg c15:V, reg c16:L, reg paste0:cls, reg name22:*, reg name23:V, reg p2:p(V +), reg r38:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r40:V, reg r41:V, reg missing1:cls, reg r42:V, reg r43:V, reg c17:L, reg object7:*, reg object8:V, reg object9:V, reg get:cls, reg name24:*, reg name25:V, reg p3:p(V +), reg parent_frame:cls, reg r45:V, reg p4:p(V +), reg r47:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r48:V, reg r49:V, reg x:*, reg x1:V, reg is_function:cls, reg r50:V, reg c18:L, reg c19:V, reg force_function1:*, reg force_function2:V, reg c21:L, reg c22:V, reg r51:V, reg c24:L, reg promptData:cls, reg x2:*, reg x3:V, reg p5:p(V +), reg filename3:*, reg filename4:V, reg p6:p(V +), reg name26:*, reg name27:V, reg p7:p(V +), reg r55:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r58:V, reg r59:V, reg formals:cls, reg x4:*, reg x5:V, reg p8:p(V +), reg r61:V, reg length1:cls, reg r62:V, reg n:*, reg n1:V, reg c25:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r63:V, reg r64:V, reg argls:*, reg argls1:V, reg names:cls, reg r65:V, reg l:*, reg c26:L, reg r67:S, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r69:S, reg dx5:V, reg arg_n:*, reg arg_n1:V, reg r70:V, reg ___:cls, reg r71:V, reg paste1:cls, reg name28:*, reg name29:V, reg p9:p(V +), reg r74:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r75:V, reg r76:V, reg n2:*, reg n3:V, reg r77:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c27:L, reg x6:V, reg paste2:cls, reg Call:*, reg Call1:V, reg p10:p(V +), reg arg_names:*, reg arg_names1:V, reg c28:L, reg arg_names3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i5:*, reg i6:V, reg __2:cls, reg r79:V, reg p11:p(V +), reg is_missing_arg:cls, reg argls2:*, reg argls3:V, reg c29:L, reg argls5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i7:*, reg i8:V, reg __3:cls, reg r81:V, reg p12:p(V +), reg r83:V, reg r84:V, reg c30:L, reg paste3:cls, reg deparse1:cls, reg argls6:*, reg argls7:V, reg c31:L, reg argls9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i9:*, reg i10:V, reg __4:cls, reg r85:V, reg p13:p(V +), reg r87:V, reg p14:p(V +), reg r89:V, reg p15:p(V +), reg r91:V, reg i11:*, reg i12:V, reg n4:*, reg n5:V, reg r92:V, reg c32:L, reg paste4:cls, reg Call2:*, reg Call3:V, reg p16:p(V +), reg r94:V, reg i15:I, reg deparse2:cls, reg x7:*, reg x8:V, reg p17:p(V +), reg r97:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r98:V, reg r99:V, reg startsWith:cls, reg x_def:*, reg x_def1:V, reg p18:p(V +), reg r101:V, reg any:cls, reg r102:V, reg c33:L, reg paste5:cls, reg x_def2:*, reg x_def3:V, reg c34:L, reg x_def5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg br:*, reg br1:V, reg __5:cls, reg r103:V, reg p19:p(V +), reg r105:V, reg l4:*, reg c35:L, reg r107:V, reg l6:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r109:V, reg dx15:V, reg br2:*, reg br3:V, reg ___1:cls, reg r110:V, reg gsub:cls, reg x_def6:*, reg x_def7:V, reg p20:p(V +), reg r113:V, reg gsub1:cls, reg Call4:*, reg Call5:V, reg p21:p(V +), reg r115:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r116:V, reg r117:V, reg paste6:cls, reg name30:*, reg name31:V, reg p22:p(V +), reg r119:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r120:V, reg r121:V, reg paste7:cls, reg name32:*, reg name33:V, reg p23:p(V +), reg r123:V, reg paste8:cls, reg r124:V, reg c36:cls, reg r125:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r126:V, reg r127:V, reg c37:cls, reg r128:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r129:V, reg r130:V, reg paste9:cls, reg r131:V, reg c38:cls, reg r132:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r133:V, reg r134:V, reg paste10:cls, reg Call6:*, reg Call7:V, reg p24:p(V +), reg r136:V, reg paste11:cls, reg r137:V, reg c39:cls, reg r138:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r139:V, reg r140:V, reg paste12:cls, reg r141:V, reg c40:cls, reg r142:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r143:V, reg r144:V, reg c41:cls, reg r145:V, reg paste13:cls, reg r146:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r147:V, reg r148:V, reg paste14:cls, reg r149:V, reg c42:cls, reg r150:V, reg paste15:cls, reg r151:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r152:V, reg r153:V, reg x_def8:*, reg x_def9:V, reg c43:cls, reg r154:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r155:V, reg r156:V, reg c44:cls, reg r157:V, reg list:cls, reg r158:V, reg n6:*, reg n7:V, reg c45:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r159:V, reg r160:V, reg paste16:cls, reg arg_n2:*, reg arg_n3:V, reg p25:p(V +), reg arg_n4:*, reg arg_n5:V, reg p26:p(V +), reg r163:V, reg c46:cls, reg r164:V, reg r165:V, reg l7:*, reg c47:L, reg r167:V, reg l9:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r170:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r171:V, reg r172:V, reg filename5:*, reg filename6:V, reg is_na:cls, reg r173:V, reg c48:L, reg Rdtxt:*, reg Rdtxt1:V, reg cat:cls, reg unlist:cls, reg Rdtxt2:*, reg Rdtxt3:V, reg p27:p(V +), reg r177:V, reg p28:p(V +), reg filename7:*, reg filename8:V, reg p29:p(V +), reg r180:V, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg filename9:*, reg filename10:V, reg p30:p(V +), reg r182:V, reg p31:p(V +), reg r184:V, reg p32:p(V +), reg gettext:cls, reg r186:V, reg p33:p(V +), reg r188:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r189:V, reg r190:V, reg filename11:*, reg filename12:V, reg invisible:cls, reg r191:V |
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
    force_function_isMissing = missing.0(force_function);
    if force_function_isMissing then L2(FALSE) else L2(force_function);
  L2(force_function_orDefault):
    st `force.function` = force_function_orDefault;
    st `...` = ddd;
    r = clos inner3031791826;
    st `is.missing.arg` = r;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L60() else L61();
  L3(r2):
    c = `as.logical`(r2);
    if c then L62() else L4();
  L60():
    missing = ldf missing in base;
    r3 = dyn missing(<sym name>);
    goto L3(r3);
  L61():
    r1 = dyn base(<sym name>);
    goto L3(r1);
  L4():
    goto L18();
  L18():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L105() else L106();
  L62():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L63() else L64();
  L5(r5):
    c2 = `as.logical`(r5);
    if c2 then L66() else L6();
  L19(r36):
    c16 = `as.logical`(r36);
    if c16 then L108() else L20();
  L63():
    object1 = ld object;
    check L65() else D0();
  L64():
    r4 = dyn base1(<sym object>);
    goto L5(r4);
  L105():
    filename1 = ld filename;
    check L107() else D16();
  L106():
    r35 = dyn base10(<sym filename>);
    goto L19(r35);
  D0():
    deopt 7 [object1];
  D16():
    deopt 62 [filename1];
  L6():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L7(object5):
    st name = object5;
    goto L18();
  L20():
    goto L21();
  L21():
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L112() else L113();
  L65():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.character`(object2);
    goto L5(c1);
  L66():
    object3 = ld object;
    check L67() else D1();
  L107():
    filename2 = force? filename1;
    checkMissing(filename2);
    c15 = `==`(filename2, NULL);
    goto L19(c15);
  L108():
    paste0 = ldf paste0;
    check L109() else D17();
  D1():
    deopt 10 [object3];
  D17():
    deopt 66 [];
  L8(r7):
    st name = r7;
    sym3 = ldf `is.name`;
    base3 = ldf `is.name` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L22(r41):
    r43 = `!`(r41);
    c17 = `as.logical`(r43);
    if c17 then L114() else L23();
  L67():
    object4 = force? object3;
    checkMissing(object4);
    goto L7(object4);
  L69():
    substitute = ldf substitute in base;
    r8 = dyn substitute(<sym object>);
    goto L8(r8);
  L70():
    r6 = dyn base2(<sym object>);
    goto L8(r6);
  L109():
    p2 = prom<V +>{
      name22 = ld name;
      name23 = force? name22;
      checkMissing(name23);
      return name23;
    };
    r38 = dyn paste0(p2, ".Rd");
    check L110() else D18();
  L112():
    missing1 = ldf missing in base;
    r42 = dyn missing1(<sym object>);
    goto L22(r42);
  L113():
    r40 = dyn base11(<sym object>);
    goto L22(r40);
  D18():
    deopt 69 [r38];
  L9(r10):
    c4 = `as.logical`(r10);
    if c4 then L74() else L10();
  L23():
    get = ldf get;
    check L117() else D20();
  L24(object9):
    st x = object9;
    sym12 = ldf `is.function`;
    base12 = ldf `is.function` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L119() else L120();
  L71():
    name1 = ld name;
    check L73() else D2();
  L72():
    r9 = dyn base3(<sym name>);
    goto L9(r9);
  L110():
    st filename = r38;
    goto L21();
  L114():
    object7 = ld object;
    check L115() else D19();
  D2():
    deopt 17 [name1];
  D19():
    deopt 77 [object7];
  D20():
    deopt 80 [];
  L10():
    sym5 = ldf `is.call`;
    base5 = ldf `is.call` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L80() else L81();
  L25(r49):
    c18 = `as.logical`(r49);
    if c18 then L26(c18) else L123();
  L73():
    name2 = force? name1;
    checkMissing(name2);
    c3 = `is.symbol`(name2);
    goto L9(c3);
  L74():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L75() else L76();
  L115():
    object8 = force? object7;
    checkMissing(object8);
    goto L24(object8);
  L117():
    p3 = prom<V +>{
      name24 = ld name;
      name25 = force? name24;
      checkMissing(name25);
      return name25;
    };
    p4 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r45 = dyn parent_frame();
      return r45;
    };
    r47 = dyn get[, envir](p3, p4);
    check L118() else D21();
  L119():
    x = ld x;
    check L121() else D22();
  L120():
    r48 = dyn base12(<sym x>);
    goto L25(r48);
  D21():
    deopt 84 [r47];
  D22():
    deopt 89 [x];
  L11(r12):
    goto L7(r12);
  L12(r15):
    c5 = `as.logical`(r15);
    if c5 then L84() else L13(c5);
  L26(c19):
    r51 = `!`(c19);
    c24 = `as.logical`(r51);
    if c24 then L126() else L27();
  L75():
    name3 = ld name;
    check L77() else D3();
  L76():
    r11 = dyn base4(<sym name>);
    goto L11(r11);
  L80():
    name5 = ld name;
    check L82() else D5();
  L81():
    r14 = dyn base5(<sym name>);
    goto L12(r14);
  L118():
    st x = r47;
    goto L24(r47);
  L121():
    x1 = force? x;
    checkMissing(x1);
    is_function = ldf `is.function` in base;
    r50 = dyn is_function(x1);
    check L122() else D23();
  L123():
    force_function1 = ld `force.function`;
    check L124() else D24();
  D3():
    deopt 22 [name3];
  D5():
    deopt 28 [name5];
  D23():
    deopt 92 [r50];
  D24():
    deopt 93 [c18, force_function1];
  L13(c7):
    c13 = `as.logical`(c7);
    if c13 then L88() else L14();
  L27():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L131() else L132();
  L77():
    name4 = force? name3;
    checkMissing(name4);
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(name4);
    check L78() else D4();
  L82():
    name6 = force? name5;
    checkMissing(name6);
    is_call = ldf `is.call` in base;
    r16 = dyn is_call(name6);
    check L83() else D6();
  L84():
    _in_ = ldf `%in%`;
    check L85() else D7();
  L122():
    goto L25(r50);
  L124():
    force_function2 = force? force_function1;
    checkMissing(force_function2);
    c21 = `as.logical`(force_function2);
    c22 = `||`(c18, c21);
    goto L26(c22);
  L126():
    promptData = ldf promptData;
    check L127() else D25();
  D4():
    deopt 25 [r13];
  D6():
    deopt 31 [r16];
  D7():
    deopt 33 [c5];
  D25():
    deopt 98 [];
  L14():
    stop = ldf stop;
    check L102() else D14();
  L29(r59):
    st n = r59;
    n = ld n;
    check L136() else D30();
  L78():
    goto L11(r13);
  L83():
    goto L12(r16);
  L85():
    p = prom<V +>{
      sym6 = ldf `as.character`;
      base6 = ldf `as.character` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r18):
      return r18;
    L2():
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      c8 = `is.object`(name8);
      if c8 then L4() else L5(name8);
    L3():
      r17 = dyn base6(<lang `[[`(name, 1)>);
      goto L0(r17);
    L1(dx1):
      as_character1 = ldf `as.character` in base;
      r20 = dyn as_character1(dx1);
      goto L0(r20);
    L4():
      dr = tryDispatchBuiltin.1("[[", name8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(name10):
      __ = ldf `[[` in base;
      r19 = dyn __(name10, 1);
      goto L1(r19);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p1 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c9 = ldf c in base;
      r24 = dyn c9("::", ":::", "getAnywhere");
      goto L0(r24);
    L2():
      r22 = dyn base7("::", ":::", "getAnywhere");
      goto L0(r22);
    };
    r26 = dyn _in_(p, p1);
    check L86() else D8();
  L88():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L89() else L90();
  L127():
    p5 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p6 = prom<V +>{
      filename3 = ld filename;
      filename4 = force? filename3;
      checkMissing(filename4);
      return filename4;
    };
    p7 = prom<V +>{
      name26 = ld name;
      name27 = force? name26;
      checkMissing(name27);
      return name27;
    };
    r55 = dyn promptData[, filename, name](p5, p6, p7);
    check L128() else D26();
  L131():
    formals = ldf formals;
    check L133() else D27();
  L132():
    r58 = dyn base13(<lang `<-`(argls, formals(x))>);
    goto L29(r58);
  D8():
    deopt 36 [c5, r26];
  D14():
    deopt 55 [];
  D26():
    deopt 104 [r55];
  D27():
    deopt 111 [];
  D30():
    deopt 118 [n];
  L15(r28):
    st name = r28;
    name13 = ld name;
    check L93() else D11();
  L86():
    c10 = `as.logical`(r26);
    c11 = `&&`(c5, c10);
    goto L13(c11);
  L89():
    name11 = ld name;
    check L91() else D9();
  L90():
    r27 = dyn base8(<sym name>);
    goto L15(r27);
  L102():
    r34 = dyn stop("cannot determine a usable name");
    check L103() else D15();
  L128():
    popenv;
    return r55;
  L133():
    p8 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r61 = dyn formals(p8);
    check L134() else D28();
  L136():
    n1 = force? n;
    checkMissing(n1);
    c25 = `as.logical`(n1);
    if c25 then L137() else L30();
  D9():
    deopt 40 [name11];
  D11():
    deopt 45 [name13];
  D15():
    deopt 57 [r34];
  D28():
    deopt 113 [r61];
  L30():
    goto L33();
  L33():
    paste1 = ldf paste0;
    check L147() else D34();
  L91():
    name12 = force? name11;
    checkMissing(name12);
    as_character2 = ldf `as.character` in base;
    r29 = dyn as_character2(name12);
    check L92() else D10();
  L93():
    name14 = force? name13;
    checkMissing(name14);
    c14 = `is.object`(name14);
    if c14 then L94() else L95(name14);
  L103():
    goto L7(r34);
  L134():
    st argls = r61;
    length1 = ldf length in base;
    r62 = dyn length1(r61);
    check L135() else D29();
  L137():
    sym14 = ldf names;
    base14 = ldf names in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L138() else L139();
  D10():
    deopt 43 [r29];
  D29():
    deopt 116 [r62];
  D34():
    deopt 140 [];
  L16(dx3):
    goto L7(dx3);
  L31(r64):
    st `arg.n` = r64;
    st `arg.names` = r64;
    l = ld `arg.n`;
    c26 = `is.object`(l);
    if c26 then L142() else L143("\\dots", l);
  L92():
    goto L15(r29);
  L94():
    dr2 = tryDispatchBuiltin.1("[", name14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L96() else L95(dr2);
  L95(name16):
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L97() else L98();
  L135():
    goto L29(r62);
  L138():
    argls = ld argls;
    check L140() else D31();
  L139():
    r63 = dyn base14(<sym argls>);
    goto L31(r63);
  L147():
    p9 = prom<V +>{
      name28 = ld name;
      name29 = force? name28;
      checkMissing(name29);
      return name29;
    };
    r74 = dyn paste1(p9, "(");
    check L148() else D35();
  D31():
    deopt 122 [argls];
  D35():
    deopt 143 [r74];
  L17(name19, r31):
    __1 = ldf `[` in base;
    r33 = dyn __1(name19, r31);
    goto L16(r33);
  L32(r69, dx5):
    st `arg.n` = dx5;
    goto L33();
  L96():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx2);
  L97():
    name20 = ld name;
    check L99() else D12();
  L98():
    r30 = dyn base9(<sym name>);
    goto L17(name16, r30);
  L140():
    argls1 = force? argls;
    checkMissing(argls1);
    names = ldf names in base;
    r65 = dyn names(argls1);
    check L141() else D32();
  L142():
    dr4 = tryDispatchBuiltin.0("[<-", l, "\\dots");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L144() else L143("\\dots", dr4);
  L143(r67, l2):
    arg_n = ld `arg.n`;
    check L145() else D33();
  L148():
    st Call = r74;
    sym15 = ldf seq_len;
    base15 = ldf seq_len in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L149() else L150();
  D12():
    deopt 49 [name16, name20];
  D32():
    deopt 125 [r65];
  D33():
    deopt 131 [r67, l2, "\\dots", arg_n];
  L34(r76):
    s = toForSeq(r76);
    l3 = length(s);
    i = 0;
    goto L35(i);
  L99():
    name21 = force? name20;
    checkMissing(name21);
    length = ldf length in base;
    r32 = dyn length(name21);
    check L100() else D13();
  L141():
    goto L31(r65);
  L144():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L32("\\dots", dx4);
  L145():
    arg_n1 = force? arg_n;
    checkMissing(arg_n1);
    r70 = `==`(arg_n1, "...");
    ___ = ldf `[<-` in base;
    r71 = dyn ___(l2, "\\dots", r70);
    goto L32(r67, r71);
  L149():
    n2 = ld n;
    check L151() else D36();
  L150():
    r75 = dyn base15(<sym n>);
    goto L34(r75);
  D13():
    deopt 52 [name16, r32];
  D36():
    deopt 146 [n2];
  L35(i1):
    i2 = `+`.1(i1, 1);
    c27 = `<`.1(l3, i2);
    if c27 then L152() else L38();
  L100():
    goto L17(name16, r32);
  L151():
    n3 = force? n2;
    checkMissing(n3);
    r77 = seq_len(n3);
    goto L34(r77);
  L38():
    x6 = `[[`(s, i2, NULL, TRUE);
    st i = x6;
    paste2 = ldf paste0;
    check L153() else D37();
  L152():
    deparse2 = ldf deparse;
    check L161() else D43();
  D37():
    deopt 150 [i2];
  D43():
    deopt 172 [];
  L153():
    p10 = prom<V +>{
      Call = ld Call;
      Call1 = force? Call;
      checkMissing(Call1);
      return Call1;
    };
    p11 = prom<V +>{
      arg_names = ld `arg.names`;
      arg_names1 = force? arg_names;
      checkMissing(arg_names1);
      c28 = `is.object`(arg_names1);
      if c28 then L1() else L2(arg_names1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", arg_names1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(arg_names3):
      i5 = ld i;
      i6 = force? i5;
      __2 = ldf `[` in base;
      r79 = dyn __2(arg_names3, i6);
      goto L0(r79);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p15 = prom<V +>{
      is_missing_arg = ldf `is.missing.arg`;
      p12 = prom<V +>{
        argls2 = ld argls;
        argls3 = force? argls2;
        checkMissing(argls3);
        c29 = `is.object`(argls3);
        if c29 then L1() else L2(argls3);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[[", argls3);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(argls5):
        i7 = ld i;
        i8 = force? i7;
        __3 = ldf `[[` in base;
        r81 = dyn __3(argls5, i8);
        goto L0(r81);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r83 = dyn is_missing_arg(p12);
      r84 = `!`(r83);
      c30 = `as.logical`(r84);
      if c30 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      paste3 = ldf paste0;
      p14 = prom<V +>{
        deparse1 = ldf deparse1;
        p13 = prom<V +>{
          argls6 = ld argls;
          argls7 = force? argls6;
          checkMissing(argls7);
          c31 = `is.object`(argls7);
          if c31 then L1() else L2(argls7);
        L0(dx11):
          return dx11;
        L1():
          dr10 = tryDispatchBuiltin.1("[[", argls7);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L3() else L2(dr10);
        L2(argls9):
          i9 = ld i;
          i10 = force? i9;
          __4 = ldf `[[` in base;
          r85 = dyn __4(argls9, i10);
          goto L0(r85);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx10);
        };
        r87 = dyn deparse1[, , backtick](p13, "\n", TRUE);
        return r87;
      };
      r89 = dyn paste3(" = ", p14);
      return r89;
    };
    r91 = dyn paste2(p10, p11, p15);
    check L154() else D38();
  L161():
    p17 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r97 = dyn deparse2(p17);
    check L162() else D44();
  D38():
    deopt 154 [i2, r91];
  D44():
    deopt 174 [r97];
  L154():
    st Call = r91;
    i11 = ld i;
    check L155() else D39();
  L162():
    st `x.def` = r97;
    sym16 = ldf any;
    base16 = ldf any in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L163() else L164();
  D39():
    deopt 156 [i2, i11];
  L39(r99):
    c33 = `as.logical`(r99);
    if c33 then L168() else L40();
  L155():
    i12 = force? i11;
    checkMissing(i12);
    n4 = ld n;
    check L156() else D40();
  L163():
    startsWith = ldf startsWith;
    check L165() else D45();
  L164():
    r98 = dyn base16(<lang `<-`(br, startsWith(x.def, "}"))>);
    goto L39(r98);
  D40():
    deopt 157 [i2, i12, n4];
  D45():
    deopt 179 [];
  L40():
    goto L42();
  L42():
    gsub = ldf gsub;
    check L176() else D51();
  L156():
    n5 = force? n4;
    checkMissing(n5);
    r92 = `!=`(i12, n5);
    c32 = `as.logical`(r92);
    if c32 then L157() else L36();
  L165():
    p18 = prom<V +>{
      x_def = ld `x.def`;
      x_def1 = force? x_def;
      checkMissing(x_def1);
      return x_def1;
    };
    r101 = dyn startsWith(p18, "}");
    check L166() else D46();
  L168():
    paste5 = ldf paste0;
    check L169() else D48();
  D46():
    deopt 182 [r101];
  D48():
    deopt 187 [];
  D51():
    deopt 199 [];
  L36():
    goto L37(i2);
  L37(i15):
    goto L35(i15);
  L157():
    paste4 = ldf paste0;
    check L158() else D41();
  L166():
    st br = r101;
    any = ldf any in base;
    r102 = dyn any(r101);
    check L167() else D47();
  L169():
    p19 = prom<V +>{
      x_def2 = ld `x.def`;
      x_def3 = force? x_def2;
      checkMissing(x_def3);
      c34 = `is.object`(x_def3);
      if c34 then L1() else L2(x_def3);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", x_def3);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x_def5):
      br = ld br;
      br1 = force? br;
      __5 = ldf `[` in base;
      r103 = dyn __5(x_def5, br1);
      goto L0(r103);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r105 = dyn paste5("  ", p19);
    check L170() else D49();
  L176():
    p20 = prom<V +>{
      x_def6 = ld `x.def`;
      x_def7 = force? x_def6;
      checkMissing(x_def7);
      return x_def7;
    };
    r113 = dyn gsub[, , , fixed]("%", "\\%", p20, TRUE);
    check L177() else D52();
  D41():
    deopt 161 [i2];
  D47():
    deopt 185 [r102];
  D49():
    deopt 190 [r105];
  D52():
    deopt 205 [r113];
  L158():
    p16 = prom<V +>{
      Call2 = ld Call;
      Call3 = force? Call2;
      checkMissing(Call3);
      return Call3;
    };
    r94 = dyn paste4(p16, ", ");
    check L159() else D42();
  L167():
    goto L39(r102);
  L170():
    l4 = ld `x.def`;
    c35 = `is.object`(l4);
    if c35 then L171() else L172(r105, l4);
  L177():
    st `x.def` = r113;
    gsub1 = ldf gsub;
    check L178() else D53();
  D42():
    deopt 164 [i2, r94];
  D53():
    deopt 208 [];
  L41(r109, dx15):
    st `x.def` = dx15;
    goto L42();
  L159():
    st Call = r94;
    goto L37(i2);
  L171():
    dr14 = tryDispatchBuiltin.0("[<-", l4, r105);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L173() else L172(r105, dr14);
  L172(r107, l6):
    br2 = ld br;
    check L174() else D50();
  L178():
    p21 = prom<V +>{
      Call4 = ld Call;
      Call5 = force? Call4;
      checkMissing(Call5);
      return Call5;
    };
    r115 = dyn gsub1[, , , fixed]("%", "\\%", p21, TRUE);
    check L179() else D54();
  D50():
    deopt 192 [r107, l6, r105, br2];
  D54():
    deopt 214 [r115];
  L173():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L41(r105, dx14);
  L174():
    br3 = force? br2;
    ___1 = ldf `[<-` in base;
    r110 = dyn ___1(l6, r105, br3);
    goto L41(r107, r110);
  L179():
    st Call = r115;
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L180() else L181();
  L43(r117):
    st Rdtxt = r117;
    n6 = ld n;
    check L231() else D86();
  L180():
    paste6 = ldf paste0;
    check L182() else D55();
  L181():
    r116 = dyn base17[name, aliases, title, description, usage, arguments, details, value, references, author, note, seealso, examples, keywords](<lang paste0("\\name{", name, "}")>, <lang c(paste0("\\alias{", name, "}"), paste("%- Also NEED an '\\alias' for EACH other topic", "documented here."))>, <lang c("\\title{", "A Capitalized Title (ideally limited to 65 characters)", "}")>, <lang c("\\description{", paste("%%  ~~ A concise (1-5 lines) description of what", "the function does. ~~"), "}")>, <lang c("\\usage{", paste0(Call, ")"), "}", paste("%- maybe also 'usage' for other objects", "documented here."))>, NULL, <lang c("\\details{", paste("%%  ~~ If necessary, more details than the", "description above ~~"), "}")>, <lang c("\\value{", "%%  ~Describe the value returned", "%%  If it is a LIST, use", "%%  \\item{comp1 }{Description of 'comp1'}", "%%  \\item{comp2 }{Description of 'comp2'}", "%% ...", "}")>, <lang paste("\\references{\n%% ~put references to the", "literature/web site here ~\n}")>, "\\author{\n%%  ~~who you are~~\n}", <lang c("\\note{\n%%  ~~further notes~~\n}", "", paste("%% ~Make other sections like Warning with", "\\section{Warning }{....} ~"), "")>, <lang paste("\\seealso{\n%% ~~objects to See Also as", "\\code{\\link{help}}, ~~~\n}")>, <lang c("\\examples{", "##---- Should be DIRECTLY executable !! ----", "##-- ==>  Define data, use random,", "##--\tor standard data sets, see data().", "", "## The function is currently defined as", x.def, "}")>, <lang c("% Add one or more standard keywords, see file 'KEYWORDS' in the", "% R documentation directory (show via RShowDoc(\"KEYWORDS\")):", "% \\keyword{ ~kwd1 }", "% \\keyword{ ~kwd2 }", "% Use only one keyword per line.", "% For non-standard keywords, use \\concept instead of \\keyword:", "% \\concept{ ~cpt1 }", "% \\concept{ ~cpt2 }", "% Use only one concept per line.")>);
    goto L43(r116);
  D55():
    deopt 219 [];
  D86():
    deopt 362 [n6];
  L182():
    p22 = prom<V +>{
      name30 = ld name;
      name31 = force? name30;
      checkMissing(name31);
      return name31;
    };
    r119 = dyn paste6("\\name{", p22, "}");
    check L183() else D56();
  L231():
    n7 = force? n6;
    checkMissing(n7);
    c45 = `as.logical`(n7);
    if c45 then L232() else L53();
  D56():
    deopt 223 [r119];
  L53():
    goto L55(NULL);
  L55(r165):
    l7 = ld Rdtxt;
    c47 = `is.object`(l7);
    if c47 then L240() else L241(r165, l7);
  L183():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L184() else L185();
  L232():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L233() else L234();
  L44(r121):
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L191() else L192();
  L54(r160):
    goto L55(r160);
  L184():
    paste7 = ldf paste0;
    check L186() else D57();
  L185():
    r120 = dyn base18(<lang paste0("\\alias{", name, "}")>, <lang paste("%- Also NEED an '\\alias' for EACH other topic", "documented here.")>);
    goto L44(r120);
  L233():
    paste16 = ldf paste0;
    check L235() else D87();
  L234():
    r159 = dyn base27("\\arguments{", <lang paste0("  \\item{", arg.n, "}{", "\n%%     ~~Describe \\code{", arg.n, "} here~~\n}")>, "}");
    goto L54(r159);
  L239(dx17):
    st Rdtxt = dx17;
    sym28 = ldf `is.na`;
    base28 = ldf `is.na` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L243() else L244();
  L240():
    dr16 = tryDispatchBuiltin.0("$<-", l7, r165);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L242() else L241(r165, dr16);
  L241(r167, l9):
    r170 = `$<-`(l9, <sym arguments>, r165);
    goto L239(r170);
  D57():
    deopt 228 [];
  D87():
    deopt 368 [];
  L45(r127):
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L194() else L195();
  L56(r172):
    c48 = `as.logical`(r172);
    if c48 then L247() else L57();
  L186():
    p23 = prom<V +>{
      name32 = ld name;
      name33 = force? name32;
      checkMissing(name33);
      return name33;
    };
    r123 = dyn paste7("\\alias{", p23, "}");
    check L187() else D58();
  L191():
    c37 = ldf c in base;
    r128 = dyn c37("\\title{", "A Capitalized Title (ideally limited to 65 characters)", "}");
    check L193() else D62();
  L192():
    r126 = dyn base19("\\title{", "A Capitalized Title (ideally limited to 65 characters)", "}");
    goto L45(r126);
  L235():
    p25 = prom<V +>{
      arg_n2 = ld `arg.n`;
      arg_n3 = force? arg_n2;
      checkMissing(arg_n3);
      return arg_n3;
    };
    p26 = prom<V +>{
      arg_n4 = ld `arg.n`;
      arg_n5 = force? arg_n4;
      checkMissing(arg_n5);
      return arg_n5;
    };
    r163 = dyn paste16("  \\item{", p25, "}{", "\n%%     ~~Describe \\code{", p26, "} here~~\n}");
    check L236() else D88();
  L242():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L239(dx16);
  L243():
    filename5 = ld filename;
    check L245() else D90();
  L244():
    r171 = dyn base28(<sym filename>);
    goto L56(r171);
  D58():
    deopt 232 [r123];
  D62():
    deopt 247 [r128];
  D88():
    deopt 375 [r163];
  D90():
    deopt 386 [filename5];
  L46(r130):
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L199() else L200();
  L57():
    cat = ldf cat;
    check L251() else D93();
  L187():
    paste8 = ldf paste;
    check L188() else D59();
  L193():
    goto L45(r128);
  L194():
    paste9 = ldf paste;
    check L196() else D63();
  L195():
    r129 = dyn base20("\\description{", <lang paste("%%  ~~ A concise (1-5 lines) description of what", "the function does. ~~")>, "}");
    goto L46(r129);
  L236():
    c46 = ldf c in base;
    r164 = dyn c46("\\arguments{", r163, "}");
    check L237() else D89();
  L245():
    filename6 = force? filename5;
    checkMissing(filename6);
    is_na = ldf `is.na` in base;
    r173 = dyn is_na(filename6);
    check L246() else D91();
  L247():
    Rdtxt = ld Rdtxt;
    check L248() else D92();
  D59():
    deopt 234 [];
  D63():
    deopt 253 [];
  D89():
    deopt 378 [r164];
  D91():
    deopt 389 [r173];
  D92():
    deopt 390 [Rdtxt];
  D93():
    deopt 396 [];
  L47(r134):
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L206() else L207();
  L188():
    r124 = dyn paste8("%- Also NEED an '\\alias' for EACH other topic", "documented here.");
    check L189() else D60();
  L196():
    r131 = dyn paste9("%%  ~~ A concise (1-5 lines) description of what", "the function does. ~~");
    check L197() else D64();
  L199():
    paste10 = ldf paste0;
    check L201() else D66();
  L200():
    r133 = dyn base21("\\usage{", <lang paste0(Call, ")")>, "}", <lang paste("%- maybe also 'usage' for other objects", "documented here.")>);
    goto L47(r133);
  L237():
    goto L54(r164);
  L246():
    goto L56(r173);
  L248():
    Rdtxt1 = force? Rdtxt;
    checkMissing(Rdtxt1);
    popenv;
    return Rdtxt1;
  L251():
    p28 = prom<V +>{
      unlist = ldf unlist;
      p27 = prom<V +>{
        Rdtxt2 = ld Rdtxt;
        Rdtxt3 = force? Rdtxt2;
        checkMissing(Rdtxt3);
        return Rdtxt3;
      };
      r177 = dyn unlist(p27);
      return r177;
    };
    p29 = prom<V +>{
      filename7 = ld filename;
      filename8 = force? filename7;
      checkMissing(filename8);
      return filename8;
    };
    r180 = dyn cat[, file, sep](p28, p29, "\n");
    check L252() else D94();
  D60():
    deopt 237 [r124];
  D64():
    deopt 256 [r131];
  D66():
    deopt 265 [];
  D94():
    deopt 402 [r180];
  L48(r140):
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L211() else L212();
  L189():
    c36 = ldf c in base;
    r125 = dyn c36(r123, r124);
    check L190() else D61();
  L197():
    c38 = ldf c in base;
    r132 = dyn c38("\\description{", r131, "}");
    check L198() else D65();
  L201():
    p24 = prom<V +>{
      Call6 = ld Call;
      Call7 = force? Call6;
      checkMissing(Call7);
      return Call7;
    };
    r136 = dyn paste10(p24, ")");
    check L202() else D67();
  L206():
    paste12 = ldf paste;
    check L208() else D71();
  L207():
    r139 = dyn base22("\\details{", <lang paste("%%  ~~ If necessary, more details than the", "description above ~~")>, "}");
    goto L48(r139);
  L252():
    message = ldf message;
    check L253() else D95();
  D61():
    deopt 239 [r125];
  D65():
    deopt 259 [r132];
  D67():
    deopt 268 [r136];
  D71():
    deopt 284 [];
  D95():
    deopt 404 [];
  L49(r144):
    paste13 = ldf paste;
    check L214() else D75();
  L190():
    goto L44(r125);
  L198():
    goto L46(r132);
  L202():
    paste11 = ldf paste;
    check L203() else D68();
  L208():
    r141 = dyn paste12("%%  ~~ If necessary, more details than the", "description above ~~");
    check L209() else D72();
  L211():
    c41 = ldf c in base;
    r145 = dyn c41("\\value{", "%%  ~Describe the value returned", "%%  If it is a LIST, use", "%%  \\item{comp1 }{Description of 'comp1'}", "%%  \\item{comp2 }{Description of 'comp2'}", "%% ...", "}");
    check L213() else D74();
  L212():
    r143 = dyn base23("\\value{", "%%  ~Describe the value returned", "%%  If it is a LIST, use", "%%  \\item{comp1 }{Description of 'comp1'}", "%%  \\item{comp2 }{Description of 'comp2'}", "%% ...", "}");
    goto L49(r143);
  L253():
    p32 = prom<V +>{
      gettextf = ldf gettextf;
      p31 = prom<V +>{
        sQuote = ldf sQuote;
        p30 = prom<V +>{
          filename9 = ld filename;
          filename10 = force? filename9;
          checkMissing(filename10);
          return filename10;
        };
        r182 = dyn sQuote(p30);
        return r182;
      };
      r184 = dyn gettextf("Created file named %s.", p31);
      return r184;
    };
    p33 = prom<V +>{
      gettext = ldf gettext;
      r186 = dyn gettext("Edit the file and move it to the appropriate directory.");
      return r186;
    };
    r188 = dyn message[, , , domain](p32, "\n", p33, NA_LGL);
    check L254() else D96();
  D68():
    deopt 271 [];
  D72():
    deopt 287 [r141];
  D74():
    deopt 302 [r145];
  D75():
    deopt 305 [];
  D96():
    deopt 410 [r188];
  L203():
    r137 = dyn paste11("%- maybe also 'usage' for other objects", "documented here.");
    check L204() else D69();
  L209():
    c40 = ldf c in base;
    r142 = dyn c40("\\details{", r141, "}");
    check L210() else D73();
  L213():
    goto L49(r145);
  L214():
    r146 = dyn paste13("\\references{\n%% ~put references to the", "literature/web site here ~\n}");
    check L215() else D76();
  L254():
    sym29 = ldf invisible;
    base29 = ldf invisible in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L255() else L256();
  D69():
    deopt 274 [r137];
  D73():
    deopt 290 [r142];
  D76():
    deopt 308 [r146];
  L59(r190):
    popenv;
    return r190;
  L204():
    c39 = ldf c in base;
    r138 = dyn c39("\\usage{", r136, "}", r137);
    check L205() else D70();
  L210():
    goto L48(r142);
  L215():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L216() else L217();
  L255():
    filename11 = ld filename;
    check L257() else D97();
  L256():
    r189 = dyn base29(<sym filename>);
    goto L59(r189);
  D70():
    deopt 276 [r138];
  D97():
    deopt 413 [filename11];
  L50(r148):
    paste15 = ldf paste;
    check L221() else D80();
  L205():
    goto L47(r138);
  L216():
    paste14 = ldf paste;
    check L218() else D77();
  L217():
    r147 = dyn base24("\\note{\n%%  ~~further notes~~\n}", "", <lang paste("%% ~Make other sections like Warning with", "\\section{Warning }{....} ~")>, "");
    goto L50(r147);
  L257():
    filename12 = force? filename11;
    checkMissing(filename12);
    invisible = ldf invisible in base;
    r191 = dyn invisible(filename12);
    check L258() else D98();
  D77():
    deopt 317 [];
  D80():
    deopt 326 [];
  D98():
    deopt 416 [r191];
  L218():
    r149 = dyn paste14("%% ~Make other sections like Warning with", "\\section{Warning }{....} ~");
    check L219() else D78();
  L221():
    r151 = dyn paste15("\\seealso{\n%% ~~objects to See Also as", "\\code{\\link{help}}, ~~~\n}");
    check L222() else D81();
  L258():
    goto L59(r191);
  D78():
    deopt 320 [r149];
  D81():
    deopt 329 [r151];
  L219():
    c42 = ldf c in base;
    r150 = dyn c42("\\note{\n%%  ~~further notes~~\n}", "", r149, "");
    check L220() else D79();
  L222():
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L223() else L224();
  D79():
    deopt 323 [r150];
  L51(r153):
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L227() else L228();
  L220():
    goto L50(r150);
  L223():
    x_def8 = ld `x.def`;
    check L225() else D82();
  L224():
    r152 = dyn base25("\\examples{", "##---- Should be DIRECTLY executable !! ----", "##-- ==>  Define data, use random,", "##--\tor standard data sets, see data().", "", "## The function is currently defined as", <sym x.def>, "}");
    goto L51(r152);
  D82():
    deopt 339 [x_def8];
  L52(r156):
    list = ldf list in base;
    r158 = dyn list(r119, r121, r127, r130, r134, NULL, r140, r144, r146, "\\author{\n%%  ~~who you are~~\n}", r148, r151, r153, r156);
    check L230() else D85();
  L225():
    x_def9 = force? x_def8;
    checkMissing(x_def9);
    c43 = ldf c in base;
    r154 = dyn c43("\\examples{", "##---- Should be DIRECTLY executable !! ----", "##-- ==>  Define data, use random,", "##--\tor standard data sets, see data().", "", "## The function is currently defined as", x_def9, "}");
    check L226() else D83();
  L227():
    c44 = ldf c in base;
    r157 = dyn c44("% Add one or more standard keywords, see file 'KEYWORDS' in the", "% R documentation directory (show via RShowDoc(\"KEYWORDS\")):", "% \\keyword{ ~kwd1 }", "% \\keyword{ ~kwd2 }", "% Use only one keyword per line.", "% For non-standard keywords, use \\concept instead of \\keyword:", "% \\concept{ ~cpt1 }", "% \\concept{ ~cpt2 }", "% Use only one concept per line.");
    check L229() else D84();
  L228():
    r155 = dyn base26("% Add one or more standard keywords, see file 'KEYWORDS' in the", "% R documentation directory (show via RShowDoc(\"KEYWORDS\")):", "% \\keyword{ ~kwd1 }", "% \\keyword{ ~kwd2 }", "% Use only one keyword per line.", "% For non-standard keywords, use \\concept instead of \\keyword:", "% \\concept{ ~cpt1 }", "% \\concept{ ~cpt2 }", "% Use only one concept per line.");
    goto L52(r155);
  D83():
    deopt 343 [r154];
  D84():
    deopt 357 [r157];
  D85():
    deopt 360 [r158];
  L226():
    goto L51(r154);
  L229():
    goto L52(r157);
  L230():
    goto L43(r158);
  }
}
fun inner3031791826(arg) {
  (reg arg:*) -+> V { var arg:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg arg1:*, reg arg2:V, reg typeof:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg deparse:cls, reg arg3:*, reg arg4:V, reg p:p(V +), reg r5:V, reg r6:V, reg c3:L, reg c4:V |
    mkenv;
    st arg = arg;
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    r3 = `==`(r1, "symbol");
    c = `as.logical`(r3);
    if c then L6() else L1(c);
  L2():
    arg1 = ld arg;
    check L4() else D0();
  L3():
    r = dyn base(<sym arg>);
    goto L0(r);
  D0():
    deopt 2 [arg1];
  L1(c2):
    popenv;
    return c2;
  L4():
    arg2 = force? arg1;
    checkMissing(arg2);
    typeof = ldf typeof in base;
    r2 = dyn typeof(arg2);
    check L5() else D1();
  L6():
    deparse = ldf deparse;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [c];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      arg3 = ld arg;
      arg4 = force? arg3;
      checkMissing(arg4);
      return arg4;
    };
    r5 = dyn deparse(p);
    check L8() else D3();
  D3():
    deopt 11 [c, r5];
  L8():
    r6 = `==`(r5, "");
    c3 = `as.logical`(r6);
    c4 = `&&`(c, c3);
    goto L1(c4);
  }
}