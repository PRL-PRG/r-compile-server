fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2402888694;
    st `.completeToken` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2402888694(custom) {
  (reg custom:*) -+> V { var custom:*, reg custom_isMissing:L, reg custom_orDefault:*, reg rc_getOption:cls, reg r:V, reg custom1:*, reg custom2:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg c5:L, reg r2:V, reg custom_completer:*, reg custom_completer1:V, reg is_function:cls, reg r3:V, reg c6:L, reg c7:V, reg c9:L, reg custom_completer2:cls, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg p:p(V +), reg r5:V, reg _CompletionEnv2:*, reg _CompletionEnv3:V, reg c10:L, reg _CompletionEnv5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg isInsideQuotes:cls, reg r9:V, reg c11:L, reg _CompletionEnv6:*, reg _CompletionEnv7:V, reg c12:L, reg _CompletionEnv9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg c13:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r11:V, reg c14:L, reg _guessTokenFromLine:cls, reg r12:V, reg fullToken:*, reg fullToken1:V, reg c15:L, reg fullToken3:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r13:V, reg r14:V, reg c16:L, reg c18:V, reg substr:cls, reg _CompletionEnv10:*, reg _CompletionEnv11:V, reg c19:L, reg _CompletionEnv13:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r15:V, reg p1:p(V +), reg fullToken4:*, reg fullToken5:V, reg c20:L, reg fullToken7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r17:V, reg r18:V, reg p2:p(V +), reg fullToken8:*, reg fullToken9:V, reg c21:L, reg fullToken11:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r20:V, reg r21:V, reg p3:p(V +), reg r23:V, reg r24:V, reg c22:L, reg c23:V, reg probablyHelp:*, reg probablyHelp1:V, reg c25:L, reg _guessTokenFromLine1:cls, reg fullToken12:*, reg fullToken13:V, reg c26:L, reg fullToken15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r25:V, reg r26:V, reg p4:p(V +), reg r28:V, reg c27:L, reg r30:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r31:V, reg l:*, reg c28:L, reg dx21:V, reg l2:*, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg dx25:V, reg r32:V, reg fullToken16:*, reg fullToken17:V, reg c29:L, reg fullToken19:V, reg dr20:V, reg dc10:L, reg dx27:V, reg dx28:V, reg r33:V, reg r34:V, reg c30:L, reg c32:V, reg substr1:cls, reg _CompletionEnv14:*, reg _CompletionEnv15:V, reg c33:L, reg _CompletionEnv17:V, reg dr22:V, reg dc11:L, reg dx29:V, reg dx30:V, reg __3:cls, reg r35:V, reg p5:p(V +), reg fullToken20:*, reg fullToken21:V, reg c34:L, reg fullToken23:V, reg dr24:V, reg dc12:L, reg dx31:V, reg dx32:V, reg r37:V, reg r38:V, reg p6:p(V +), reg fullToken24:*, reg fullToken25:V, reg c35:L, reg fullToken27:V, reg dr26:V, reg dc13:L, reg dx33:V, reg dx34:V, reg r40:V, reg r41:V, reg p7:p(V +), reg r43:V, reg r44:V, reg c36:L, reg c37:V, reg c39:L, reg c40:V, reg fullToken28:*, reg fullToken29:V, reg c42:L, reg c44:L, reg fullToken31:V, reg dr28:V, reg dc14:L, reg dx35:V, reg c46:L, reg dx36:V, reg r45:V, reg r46:V, reg c47:L, reg c50:L, reg c51:V, reg substr2:cls, reg _CompletionEnv18:*, reg _CompletionEnv19:V, reg c52:L, reg _CompletionEnv21:V, reg dr30:V, reg dc15:L, reg dx37:V, reg dx38:V, reg __4:cls, reg r47:V, reg p8:p(V +), reg fullToken32:*, reg fullToken33:V, reg c53:L, reg fullToken35:V, reg dr32:V, reg dc16:L, reg dx39:V, reg dx40:V, reg r49:V, reg r50:V, reg p9:p(V +), reg fullToken36:*, reg fullToken37:V, reg c54:L, reg fullToken39:V, reg dr34:V, reg dc17:L, reg dx41:V, reg dx42:V, reg r52:V, reg r53:V, reg p10:p(V +), reg r55:V, reg r56:V, reg c55:L, reg c56:V, reg c59:L, reg c60:V, reg fullToken40:*, reg fullToken41:V, reg c62:L, reg fullToken43:V, reg dr36:V, reg dc18:L, reg dx43:V, reg dx44:V, reg r57:V, reg r58:V, reg c63:L, reg c65:V, reg _in_:cls, reg substr3:cls, reg _CompletionEnv22:*, reg _CompletionEnv23:V, reg c66:L, reg _CompletionEnv25:V, reg dr38:V, reg dc19:L, reg dx45:V, reg dx46:V, reg __5:cls, reg r59:V, reg p11:p(V +), reg fullToken44:*, reg fullToken45:V, reg c67:L, reg fullToken47:V, reg dr40:V, reg dc20:L, reg dx47:V, reg dx48:V, reg r61:V, reg r62:V, reg p12:p(V +), reg fullToken48:*, reg fullToken49:V, reg c68:L, reg fullToken51:V, reg dr42:V, reg dc21:L, reg dx49:V, reg dx50:V, reg r64:V, reg r65:V, reg p13:p(V +), reg r67:V, reg p14:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r69:V, reg r70:V, reg c69:cls, reg r71:V, reg p15:p(V +), reg r73:V, reg c70:L, reg c71:V, reg probablyHelp2:*, reg probablyHelp3:V, reg c73:L, reg c74:V, reg probablyName:*, reg probablyName1:V, reg c76:L, reg c77:V, reg c79:L, reg c80:V, reg probablyNamespace:*, reg probablyNamespace1:V, reg c82:L, reg c83:V, reg probablyHelp4:*, reg probablyHelp5:V, reg c85:L, reg substring:cls, reg helpCompletions:cls, reg fullToken52:*, reg fullToken53:V, reg c86:L, reg fullToken55:V, reg dr44:V, reg dc22:L, reg dx51:V, reg dx52:V, reg r74:V, reg p16:p(V +), reg fullToken56:*, reg fullToken57:V, reg c87:L, reg fullToken59:V, reg dr46:V, reg dc23:L, reg dx53:V, reg dx54:V, reg r76:V, reg p17:p(V +), reg r78:V, reg p18:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r82:V, reg r83:I, reg r84:V, reg fullToken60:*, reg fullToken61:V, reg c88:L, reg r86:I, reg fullToken63:V, reg dr48:V, reg dc24:L, reg dx55:V, reg r88:I, reg dx56:V, reg r89:V, reg nchar:cls, reg r90:V, reg r91:V, reg p19:p(V +), reg r93:V, reg r94:V, reg probablySpecial:*, reg probablySpecial1:V, reg r95:V, reg c89:L, reg fileCompletions:cls, reg fullToken64:*, reg fullToken65:V, reg c90:L, reg fullToken67:V, reg dr50:V, reg dc25:L, reg dx57:V, reg dx58:V, reg r96:V, reg p20:p(V +), reg r98:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r99:V, reg r100:V, reg rc_getOption1:cls, reg r101:V, reg is_function1:cls, reg r102:V, reg c91:L, reg fcustomQuote:cls, reg fullToken68:*, reg fullToken69:V, reg p21:p(V +), reg r104:V, reg _setFileComp:cls, reg r105:V, reg substring1:cls, reg tentativeCompletions:*, reg tentativeCompletions1:V, reg p22:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r109:V, reg r110:I, reg r111:V, reg fullToken70:*, reg fullToken71:V, reg c92:L, reg r113:I, reg fullToken73:V, reg dr52:V, reg dc26:L, reg dx59:V, reg r115:I, reg dx60:V, reg r116:V, reg nchar1:cls, reg r117:V, reg r118:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r121:V, reg r122:V, reg r123:V, reg text:*, reg text1:V, reg nchar2:cls, reg r124:V, reg r125:V, reg p23:p(V +), reg r127:V, reg l3:*, reg c93:L, reg r129:V, reg l5:*, reg dr54:V, reg dc27:L, reg dx61:V, reg r131:V, reg dx62:V, reg ____:cls, reg r132:V, reg character:cls, reg r133:V, reg l6:*, reg c94:L, reg r135:V, reg l8:*, reg dr56:V, reg dc28:L, reg dx63:V, reg dx64:V, reg ____1:cls, reg r138:V, reg _setFileComp1:cls, reg r139:V, reg _setFileComp2:cls, reg r140:V, reg setIsFirstArg:cls, reg r141:V, reg _CompletionEnv26:*, reg _CompletionEnv27:V, reg c95:L, reg _CompletionEnv29:V, reg dr58:V, reg dc29:L, reg dx65:V, reg dx66:V, reg r142:V, reg c96:L, reg dx68:V, reg dr60:V, reg dc30:L, reg dx69:V, reg dx70:V, reg __6:cls, reg r143:V, reg c97:L, reg inFunction:cls, reg _CompletionEnv30:*, reg _CompletionEnv31:V, reg c98:L, reg _CompletionEnv33:V, reg dr62:V, reg dc31:L, reg dx71:V, reg dx72:V, reg __7:cls, reg r144:V, reg p24:p(V +), reg _CompletionEnv34:*, reg _CompletionEnv35:V, reg c99:L, reg _CompletionEnv37:V, reg dr64:V, reg dc32:L, reg dx73:V, reg dx74:V, reg __8:cls, reg r146:V, reg p25:p(V +), reg r148:V, reg r149:V, reg guessedFunction:*, reg guessedFunction1:V, reg l9:*, reg c100:L, reg guessedFunction3:V, reg l11:*, reg dr66:V, reg dc33:L, reg dx75:V, reg dx76:V, reg ____2:cls, reg r150:V, reg functionArgs:cls, reg guessedFunction6:*, reg guessedFunction7:V, reg p26:p(V +), reg text2:*, reg text3:V, reg p27:p(V +), reg r153:V, reg getIsFirstArg:cls, reg r154:V, reg c101:L, reg c103:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r155:V, reg c106:L, reg r156:V, reg guessedFunction8:*, reg guessedFunction9:V, reg length:cls, reg r157:V, reg c107:L, reg c108:V, reg c110:L, reg c112:V, reg _in_1:cls, reg guessedFunction10:*, reg guessedFunction11:V, reg p28:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r159:V, reg r160:V, reg c113:cls, reg r161:V, reg p29:p(V +), reg r163:V, reg c114:L, reg c115:V, reg c117:L, reg fargComps:*, reg fargComps1:V, reg l12:*, reg c118:L, reg fargComps3:V, reg l14:*, reg dr68:V, reg dc34:L, reg dx77:V, reg dx78:V, reg ____3:cls, reg r164:V, reg tail_default:cls, reg gregexpr:cls, reg text4:*, reg text5:V, reg p30:p(V +), reg r168:V, reg c119:L, reg r170:V, reg dr70:V, reg dc35:L, reg dx79:V, reg dx80:V, reg __9:cls, reg r171:V, reg p31:p(V +), reg r173:V, reg lastArithOp:*, reg lastArithOp1:V, reg r174:V, reg c120:L, reg substr4:cls, reg text6:*, reg text7:V, reg p32:p(V +), reg lastArithOp2:*, reg lastArithOp3:V, reg p33:p(V +), reg r177:V, reg substr5:cls, reg text8:*, reg text9:V, reg p34:p(V +), reg lastArithOp4:*, reg lastArithOp5:V, reg r179:V, reg p35:p(V +), reg r181:V, reg specialOpLocs:cls, reg text10:*, reg text11:V, reg p36:p(V +), reg r184:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r185:V, reg r186:V, reg spl:*, reg spl1:V, reg length1:cls, reg r187:V, reg c121:L, reg specialCompletions:cls, reg text12:*, reg text13:V, reg p37:p(V +), reg spl2:*, reg spl3:V, reg p38:p(V +), reg r190:V, reg r191:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r192:V, reg r193:V, reg _in_2:cls, reg guessedFunction12:*, reg guessedFunction13:V, reg p39:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r195:V, reg r196:V, reg c122:cls, reg r197:V, reg p40:p(V +), reg r199:V, reg any:cls, reg r200:V, reg r201:V, reg normalCompletions:cls, reg text14:*, reg text15:V, reg p41:p(V +), reg appendFunctionSuffix:*, reg appendFunctionSuffix1:V, reg p42:p(V +), reg r204:V, reg haveArithOp:*, reg haveArithOp1:V, reg c123:L, reg c125:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r205:V, reg c128:L, reg r206:V, reg comps:*, reg comps1:V, reg length2:cls, reg r207:V, reg c129:L, reg c130:V, reg c132:L, reg paste0:cls, reg prefix:*, reg prefix1:V, reg p43:p(V +), reg comps2:*, reg comps3:V, reg p44:p(V +), reg r210:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r212:V, reg r213:V, reg fargComps6:*, reg fargComps7:V, reg comps4:*, reg comps5:V, reg c133:cls, reg r214:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r215:V, reg r216:V, reg rc_getOption2:cls, reg r217:V, reg is_function2:cls, reg r218:V, reg c134:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r219:V, reg r220:V, reg fcustom:cls, reg guessedFunction14:*, reg guessedFunction15:V, reg p45:p(V +), reg text16:*, reg text17:V, reg p46:p(V +), reg r223:V, reg comps6:*, reg comps7:V, reg c135:cls, reg r224:V, reg comps8:*, reg comps9:V, reg l15:*, reg c136:L, reg comps11:V, reg l17:*, reg dr72:V, reg dc36:L, reg dx81:V, reg comps13:V, reg dx82:V, reg ____4:cls, reg r226:V |
    mkenv;
    custom_isMissing = missing.0(custom);
    if custom_isMissing then L0(TRUE) else L0(custom);
  L0(custom_orDefault):
    st custom = custom_orDefault;
    rc_getOption = ldf `rc.getOption`;
    check L51() else D0();
  D0():
    deopt 1 [];
  L51():
    r = dyn rc_getOption("custom.completer");
    check L52() else D1();
  D1():
    deopt 3 [r];
  L52():
    st `custom.completer` = r;
    custom1 = ld custom;
    check L53() else D2();
  D2():
    deopt 5 [custom1];
  L53():
    custom2 = force? custom1;
    checkMissing(custom2);
    c = `as.logical`(custom2);
    if c then L54() else L1(c);
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L60() else L3();
  L54():
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L55() else L56();
  L2(c5, r2):
    c6 = `as.logical`(r2);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    _CompletionEnv2 = ld `.CompletionEnv`;
    check L65() else D7();
  L55():
    custom_completer = ld `custom.completer`;
    check L57() else D3();
  L56():
    r1 = dyn base(<sym custom.completer>);
    goto L2(c, r1);
  L60():
    custom_completer2 = ldf `custom.completer`;
    check L61() else D5();
  D3():
    deopt 9 [c, custom_completer];
  D5():
    deopt 15 [];
  D7():
    deopt 21 [_CompletionEnv2];
  L57():
    custom_completer1 = force? custom_completer;
    checkMissing(custom_completer1);
    is_function = ldf `is.function` in base;
    r3 = dyn is_function(custom_completer1);
    check L58() else D4();
  L61():
    p = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      return _CompletionEnv1;
    };
    r5 = dyn custom_completer2(p);
    check L62() else D6();
  L65():
    _CompletionEnv3 = force? _CompletionEnv2;
    checkMissing(_CompletionEnv3);
    c10 = `is.object`(_CompletionEnv3);
    if c10 then L66() else L67(_CompletionEnv3);
  D4():
    deopt 12 [c, r3];
  D6():
    deopt 17 [r5];
  L5(dx1):
    st text = dx1;
    isInsideQuotes = ldf isInsideQuotes;
    check L69() else D8();
  L58():
    goto L2(c, r3);
  L62():
    popenv;
    return r5;
  L66():
    dr = tryDispatchBuiltin.1("[[", _CompletionEnv3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L68() else L67(dr);
  L67(_CompletionEnv5):
    __ = ldf `[[` in base;
    r8 = dyn __(_CompletionEnv5, "token");
    goto L5(r8);
  D8():
    deopt 28 [];
  L68():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L69():
    r9 = dyn isInsideQuotes();
    check L70() else D9();
  D9():
    deopt 29 [r9];
  L70():
    c11 = `as.logical`(r9);
    if c11 then L71() else L6();
  L6():
    _setFileComp2 = ldf `.setFileComp`;
    check L176() else D50();
  L71():
    _CompletionEnv6 = ld `.CompletionEnv`;
    check L72() else D10();
  D10():
    deopt 30 [_CompletionEnv6];
  D50():
    deopt 183 [];
  L72():
    _CompletionEnv7 = force? _CompletionEnv6;
    checkMissing(_CompletionEnv7);
    c12 = `is.object`(_CompletionEnv7);
    if c12 then L74() else L75(_CompletionEnv7);
  L176():
    r140 = dyn _setFileComp2(FALSE);
    check L177() else D51();
  D51():
    deopt 185 [r140];
  L73(dx3):
    c13 = `is.object`(dx3);
    if c13 then L77() else L78(dx3);
  L74():
    dr2 = tryDispatchBuiltin.1("$", _CompletionEnv7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L76() else L75(dr2);
  L75(_CompletionEnv9):
    r10 = `$`(_CompletionEnv9, <sym settings>);
    goto L73(r10);
  L177():
    setIsFirstArg = ldf setIsFirstArg;
    check L178() else D52();
  D52():
    deopt 187 [];
  L7(dx7):
    c14 = `as.logical`(dx7);
    if c14 then L80() else L8();
  L76():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L73(dx2);
  L77():
    dr4 = tryDispatchBuiltin.1("[[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L79() else L78(dr4);
  L78(dx5):
    __1 = ldf `[[` in base;
    r11 = dyn __1(dx5, "quotes");
    goto L7(r11);
  L178():
    r141 = dyn setIsFirstArg(FALSE);
    check L179() else D53();
  D53():
    deopt 189 [r141];
  L8():
    character = ldf character;
    check L168() else D46();
  L79():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx6);
  L80():
    _guessTokenFromLine = ldf `.guessTokenFromLine`;
    check L81() else D11();
  L179():
    _CompletionEnv26 = ld `.CompletionEnv`;
    check L180() else D54();
  D11():
    deopt 37 [];
  D46():
    deopt 171 [];
  D54():
    deopt 190 [_CompletionEnv26];
  L81():
    r12 = dyn _guessTokenFromLine[update](FALSE);
    check L82() else D12();
  L168():
    r133 = dyn character();
    check L169() else D47();
  L180():
    _CompletionEnv27 = force? _CompletionEnv26;
    checkMissing(_CompletionEnv27);
    c95 = `is.object`(_CompletionEnv27);
    if c95 then L182() else L183(_CompletionEnv27);
  D12():
    deopt 40 [r12];
  D47():
    deopt 172 [r133];
  L82():
    st fullToken = r12;
    fullToken = ld fullToken;
    check L83() else D13();
  L169():
    l6 = ld `.CompletionEnv`;
    c94 = `is.object`(l6);
    if c94 then L170() else L171(r133, l6);
  L181(dx66):
    c96 = `is.object`(dx66);
    if c96 then L185() else L186(dx66);
  L182():
    dr58 = tryDispatchBuiltin.1("$", _CompletionEnv27);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L184() else L183(dr58);
  L183(_CompletionEnv29):
    r142 = `$`(_CompletionEnv29, <sym settings>);
    goto L181(r142);
  D13():
    deopt 42 [fullToken];
  L24(dx64):
    st `.CompletionEnv` = dx64;
    _setFileComp1 = ldf `.setFileComp`;
    check L173() else D48();
  L25(dx70):
    c97 = `as.logical`(dx70);
    if c97 then L188() else L26();
  L83():
    fullToken1 = force? fullToken;
    checkMissing(fullToken1);
    c15 = `is.object`(fullToken1);
    if c15 then L85() else L86(fullToken1);
  L170():
    dr56 = tryDispatchBuiltin.0("[[<-", l6, r133);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L172() else L171(r133, dr56);
  L171(r135, l8):
    ____1 = ldf `[[<-` in base;
    r138 = dyn ____1(l8, r133, "comps");
    goto L24(r138);
  L184():
    dx65 = getTryDispatchBuiltinValue(dr58);
    goto L181(dx65);
  L185():
    dr60 = tryDispatchBuiltin.1("[[", dx66);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L187() else L186(dr60);
  L186(dx68):
    __6 = ldf `[[` in base;
    r143 = dyn __6(dx68, "args");
    goto L25(r143);
  D48():
    deopt 179 [];
  L26():
    goto L27("");
  L27(r149):
    st guessedFunction = r149;
    guessedFunction = ld guessedFunction;
    check L192() else D57();
  L84(dx9):
    r14 = `>=`(dx9, 2);
    c16 = `as.logical`(r14);
    if c16 then L88() else L9(c16);
  L85():
    dr6 = tryDispatchBuiltin.1("$", fullToken1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L87() else L86(dr6);
  L86(fullToken3):
    r13 = `$`(fullToken3, <sym start>);
    goto L84(r13);
  L172():
    dx63 = getTryDispatchBuiltinValue(dr56);
    goto L24(dx63);
  L173():
    r139 = dyn _setFileComp1(TRUE);
    check L174() else D49();
  L187():
    dx69 = getTryDispatchBuiltinValue(dr60);
    goto L25(dx69);
  L188():
    inFunction = ldf inFunction;
    check L189() else D55();
  D49():
    deopt 181 [r139];
  D55():
    deopt 197 [];
  D57():
    deopt 204 [guessedFunction];
  L9(c18):
    st probablyHelp = c18;
    probablyHelp = ld probablyHelp;
    check L92() else D16();
  L87():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L84(dx8);
  L88():
    substr = ldf substr;
    check L89() else D14();
  L174():
    popenv;
    return r139;
  L189():
    p24 = prom<V +>{
      _CompletionEnv30 = ld `.CompletionEnv`;
      _CompletionEnv31 = force? _CompletionEnv30;
      checkMissing(_CompletionEnv31);
      c98 = `is.object`(_CompletionEnv31);
      if c98 then L1() else L2(_CompletionEnv31);
    L0(dx72):
      return dx72;
    L1():
      dr62 = tryDispatchBuiltin.1("[[", _CompletionEnv31);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(_CompletionEnv33):
      __7 = ldf `[[` in base;
      r144 = dyn __7(_CompletionEnv33, "linebuffer");
      goto L0(r144);
    L3():
      dx71 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx71);
    };
    p25 = prom<V +>{
      _CompletionEnv34 = ld `.CompletionEnv`;
      _CompletionEnv35 = force? _CompletionEnv34;
      checkMissing(_CompletionEnv35);
      c99 = `is.object`(_CompletionEnv35);
      if c99 then L1() else L2(_CompletionEnv35);
    L0(dx74):
      return dx74;
    L1():
      dr64 = tryDispatchBuiltin.1("[[", _CompletionEnv35);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(_CompletionEnv37):
      __8 = ldf `[[` in base;
      r146 = dyn __8(_CompletionEnv37, "start");
      goto L0(r146);
    L3():
      dx73 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx73);
    };
    r148 = dyn inFunction(p24, p25);
    check L190() else D56();
  L192():
    guessedFunction1 = force? guessedFunction;
    checkMissing(guessedFunction1);
    l9 = ld `.CompletionEnv`;
    c100 = `is.object`(l9);
    if c100 then L193() else L194(guessedFunction1, l9);
  D14():
    deopt 48 [c16];
  D16():
    deopt 57 [probablyHelp];
  D56():
    deopt 200 [r148];
  L28(dx76):
    st `.CompletionEnv` = dx76;
    functionArgs = ldf functionArgs;
    check L196() else D58();
  L89():
    p1 = prom<V +>{
      _CompletionEnv10 = ld `.CompletionEnv`;
      _CompletionEnv11 = force? _CompletionEnv10;
      checkMissing(_CompletionEnv11);
      c19 = `is.object`(_CompletionEnv11);
      if c19 then L1() else L2(_CompletionEnv11);
    L0(dx11):
      return dx11;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", _CompletionEnv11);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(_CompletionEnv13):
      __2 = ldf `[[` in base;
      r15 = dyn __2(_CompletionEnv13, "linebuffer");
      goto L0(r15);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    };
    p2 = prom<V +>{
      fullToken4 = ld fullToken;
      fullToken5 = force? fullToken4;
      checkMissing(fullToken5);
      c20 = `is.object`(fullToken5);
      if c20 then L1() else L2(fullToken5);
    L0(dx13):
      r18 = `-`(dx13, 1);
      return r18;
    L1():
      dr10 = tryDispatchBuiltin.1("$", fullToken5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(fullToken7):
      r17 = `$`(fullToken7, <sym start>);
      goto L0(r17);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    p3 = prom<V +>{
      fullToken8 = ld fullToken;
      fullToken9 = force? fullToken8;
      checkMissing(fullToken9);
      c21 = `is.object`(fullToken9);
      if c21 then L1() else L2(fullToken9);
    L0(dx15):
      r21 = `-`(dx15, 1);
      return r21;
    L1():
      dr12 = tryDispatchBuiltin.1("$", fullToken9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(fullToken11):
      r20 = `$`(fullToken11, <sym start>);
      goto L0(r20);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    r23 = dyn substr(p1, p2, p3);
    check L90() else D15();
  L92():
    probablyHelp1 = force? probablyHelp;
    checkMissing(probablyHelp1);
    c25 = `as.logical`(probablyHelp1);
    if c25 then L93() else L10();
  L190():
    goto L27(r148);
  L193():
    dr66 = tryDispatchBuiltin.0("[[<-", l9, guessedFunction1);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L195() else L194(guessedFunction1, dr66);
  L194(guessedFunction3, l11):
    ____2 = ldf `[[<-` in base;
    r150 = dyn ____2(l11, guessedFunction1, "fguess");
    goto L28(r150);
  D15():
    deopt 52 [c16, r23];
  D58():
    deopt 212 [];
  L10():
    goto L11();
  L11():
    fullToken16 = ld fullToken;
    check L105() else D19();
  L90():
    r24 = `==`(r23, "?");
    c22 = `as.logical`(r24);
    c23 = `&&`(c16, c22);
    goto L9(c23);
  L93():
    _guessTokenFromLine1 = ldf `.guessTokenFromLine`;
    check L94() else D17();
  L195():
    dx75 = getTryDispatchBuiltinValue(dr66);
    goto L28(dx75);
  L196():
    p26 = prom<V +>{
      guessedFunction6 = ld guessedFunction;
      guessedFunction7 = force? guessedFunction6;
      checkMissing(guessedFunction7);
      return guessedFunction7;
    };
    p27 = prom<V +>{
      text2 = ld text;
      text3 = force? text2;
      checkMissing(text3);
      return text3;
    };
    r153 = dyn functionArgs(p26, p27);
    check L197() else D59();
  D17():
    deopt 60 [];
  D19():
    deopt 72 [fullToken16];
  D59():
    deopt 215 [r153];
  L94():
    p4 = prom<V +>{
      fullToken12 = ld fullToken;
      fullToken13 = force? fullToken12;
      checkMissing(fullToken13);
      c26 = `is.object`(fullToken13);
      if c26 then L1() else L2(fullToken13);
    L0(dx17):
      r26 = `-`(dx17, 2.0);
      return r26;
    L1():
      dr14 = tryDispatchBuiltin.1("$", fullToken13);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(fullToken15):
      r25 = `$`(fullToken15, <sym start>);
      goto L0(r25);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    r28 = dyn _guessTokenFromLine1[end, update](p4, FALSE);
    check L95() else D18();
  L105():
    fullToken17 = force? fullToken16;
    checkMissing(fullToken17);
    c29 = `is.object`(fullToken17);
    if c29 then L107() else L108(fullToken17);
  L197():
    st fargComps = r153;
    getIsFirstArg = ldf getIsFirstArg;
    check L198() else D60();
  D18():
    deopt 65 [r28];
  D60():
    deopt 218 [];
  L95():
    c27 = `is.object`(r28);
    if c27 then L97() else L98(r28);
  L106(dx28):
    r34 = `>`(dx28, 2);
    c30 = `as.logical`(r34);
    if c30 then L110() else L12(c30);
  L107():
    dr20 = tryDispatchBuiltin.1("$", fullToken17);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L109() else L108(dr20);
  L108(fullToken19):
    r33 = `$`(fullToken19, <sym start>);
    goto L106(r33);
  L198():
    r154 = dyn getIsFirstArg();
    check L199() else D61();
  D61():
    deopt 219 [r154];
  L12(c32):
    c39 = `as.logical`(c32);
    if c39 then L13(c39) else L114();
  L96(dx19):
    l = ld fullToken;
    c28 = `is.object`(l);
    if c28 then L101() else L102(dx19, l);
  L97():
    dr16 = tryDispatchBuiltin.1("$", r28);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L99() else L98(dr16);
  L98(r30):
    r31 = `$`(r30, <sym token>);
    goto L96(r31);
  L109():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L106(dx27);
  L110():
    substr1 = ldf substr;
    check L111() else D20();
  L199():
    c101 = `as.logical`(r154);
    if c101 then L200() else L29(c101);
  D20():
    deopt 78 [c30];
  L13(c40):
    st probablyName = c40;
    fullToken40 = ld fullToken;
    check L125() else D25();
  L29(c103):
    c110 = `as.logical`(c103);
    if c110 then L206() else L31(c110);
  L99():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L96(dx18);
  L100(dx24, dx25):
    st fullToken = dx25;
    goto L11();
  L101():
    dr18 = tryDispatchBuiltin.0("$<-", l, dx19);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L103() else L102(dx19, dr18);
  L102(dx21, l2):
    r32 = `$<-`(l2, <sym prefix>, dx19);
    goto L100(dx21, r32);
  L111():
    p5 = prom<V +>{
      _CompletionEnv14 = ld `.CompletionEnv`;
      _CompletionEnv15 = force? _CompletionEnv14;
      checkMissing(_CompletionEnv15);
      c33 = `is.object`(_CompletionEnv15);
      if c33 then L1() else L2(_CompletionEnv15);
    L0(dx30):
      return dx30;
    L1():
      dr22 = tryDispatchBuiltin.1("[[", _CompletionEnv15);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(_CompletionEnv17):
      __3 = ldf `[[` in base;
      r35 = dyn __3(_CompletionEnv17, "linebuffer");
      goto L0(r35);
    L3():
      dx29 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx29);
    };
    p6 = prom<V +>{
      fullToken20 = ld fullToken;
      fullToken21 = force? fullToken20;
      checkMissing(fullToken21);
      c34 = `is.object`(fullToken21);
      if c34 then L1() else L2(fullToken21);
    L0(dx32):
      r38 = `-`(dx32, 1);
      return r38;
    L1():
      dr24 = tryDispatchBuiltin.1("$", fullToken21);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(fullToken23):
      r37 = `$`(fullToken23, <sym start>);
      goto L0(r37);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx31);
    };
    p7 = prom<V +>{
      fullToken24 = ld fullToken;
      fullToken25 = force? fullToken24;
      checkMissing(fullToken25);
      c35 = `is.object`(fullToken25);
      if c35 then L1() else L2(fullToken25);
    L0(dx34):
      r41 = `-`(dx34, 1);
      return r41;
    L1():
      dr26 = tryDispatchBuiltin.1("$", fullToken25);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(fullToken27):
      r40 = `$`(fullToken27, <sym start>);
      goto L0(r40);
    L3():
      dx33 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx33);
    };
    r43 = dyn substr1(p5, p6, p7);
    check L112() else D21();
  L114():
    fullToken28 = ld fullToken;
    check L115() else D22();
  L200():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L201() else L202();
  D21():
    deopt 82 [c30, r43];
  D22():
    deopt 86 [c39, fullToken28];
  D25():
    deopt 102 [fullToken40];
  L30(c106, r156):
    c107 = `as.logical`(r156);
    c108 = `&&`(c106, c107);
    goto L29(c108);
  L31(c112):
    c117 = `as.logical`(c112);
    if c117 then L210() else L32();
  L103():
    dx23 = getTryDispatchBuiltinValue(dr18);
    goto L100(dx19, dx23);
  L112():
    r44 = `==`(r43, "$");
    c36 = `as.logical`(r44);
    c37 = `&&`(c30, c36);
    goto L12(c37);
  L115():
    fullToken29 = force? fullToken28;
    checkMissing(fullToken29);
    c42 = `is.object`(fullToken29);
    if c42 then L117() else L118(c39, fullToken29);
  L125():
    fullToken41 = force? fullToken40;
    checkMissing(fullToken41);
    c62 = `is.object`(fullToken41);
    if c62 then L127() else L128(fullToken41);
  L201():
    guessedFunction8 = ld guessedFunction;
    check L203() else D62();
  L202():
    r155 = dyn base6(<sym guessedFunction>);
    goto L30(c101, r155);
  L206():
    _in_1 = ldf `%in%`;
    check L207() else D64();
  D62():
    deopt 222 [c101, guessedFunction8];
  D64():
    deopt 228 [c110];
  L32():
    tail_default = ldf `tail.default`;
    check L217() else D67();
  L116(c46, dx36):
    r46 = `>`(dx36, 3);
    c47 = `as.logical`(r46);
    if c47 then L120() else L14(c46, c47);
  L117():
    dr28 = tryDispatchBuiltin.1("$", fullToken29);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L119() else L118(c39, dr28);
  L118(c44, fullToken31):
    r45 = `$`(fullToken31, <sym start>);
    goto L116(c44, r45);
  L126(dx44):
    r58 = `>`(dx44, 3);
    c63 = `as.logical`(r58);
    if c63 then L130() else L15(c63);
  L127():
    dr36 = tryDispatchBuiltin.1("$", fullToken41);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L129() else L128(dr36);
  L128(fullToken43):
    r57 = `$`(fullToken43, <sym start>);
    goto L126(r57);
  L203():
    guessedFunction9 = force? guessedFunction8;
    checkMissing(guessedFunction9);
    length = ldf length in base;
    r157 = dyn length(guessedFunction9);
    check L204() else D63();
  L207():
    p28 = prom<V +>{
      guessedFunction10 = ld guessedFunction;
      guessedFunction11 = force? guessedFunction10;
      checkMissing(guessedFunction11);
      return guessedFunction11;
    };
    p29 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r160):
      return r160;
    L1():
      c113 = ldf c in base;
      r161 = dyn c113("library", "require", "data");
      goto L0(r161);
    L2():
      r159 = dyn base7("library", "require", "data");
      goto L0(r159);
    };
    r163 = dyn _in_1(p28, p29);
    check L208() else D65();
  L210():
    fargComps = ld fargComps;
    check L211() else D66();
  D63():
    deopt 225 [c101, r157];
  D65():
    deopt 231 [c110, r163];
  D66():
    deopt 233 [fargComps];
  D67():
    deopt 246 [];
  L14(c50, c51):
    c59 = `as.logical`(c51);
    c60 = `||`(c50, c59);
    goto L13(c60);
  L15(c65):
    st probablyNamespace = c65;
    probablyHelp2 = ld probablyHelp;
    check L134() else D28();
  L119():
    dx35 = getTryDispatchBuiltinValue(dr28);
    goto L116(c39, dx35);
  L120():
    substr2 = ldf substr;
    check L121() else D23();
  L129():
    dx43 = getTryDispatchBuiltinValue(dr36);
    goto L126(dx43);
  L130():
    _in_ = ldf `%in%`;
    check L131() else D26();
  L204():
    goto L30(c101, r157);
  L208():
    c114 = `as.logical`(r163);
    c115 = `&&`(c110, c114);
    goto L31(c115);
  L211():
    fargComps1 = force? fargComps;
    checkMissing(fargComps1);
    l12 = ld `.CompletionEnv`;
    c118 = `is.object`(l12);
    if c118 then L212() else L213(fargComps1, l12);
  L217():
    p31 = prom<V +>{
      gregexpr = ldf gregexpr;
      p30 = prom<V +>{
        text4 = ld text;
        text5 = force? text4;
        checkMissing(text5);
        return text5;
      };
      r168 = dyn gregexpr("[\"'^/*+-]", p30);
      c119 = `is.object`(r168);
      if c119 then L1() else L2(r168);
    L0(dx80):
      return dx80;
    L1():
      dr70 = tryDispatchBuiltin.1("[[", r168);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L3() else L2(dr70);
    L2(r170):
      __9 = ldf `[[` in base;
      r171 = dyn __9(r170, 1);
      goto L0(r171);
    L3():
      dx79 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx79);
    };
    r173 = dyn tail_default(p31, 1.0);
    check L218() else D68();
  D23():
    deopt 92 [c46, c47];
  D26():
    deopt 108 [c63];
  D28():
    deopt 114 [probablyHelp2];
  D68():
    deopt 249 [r173];
  L33(dx78):
    st `.CompletionEnv` = dx78;
    popenv;
    return NULL;
  L121():
    p8 = prom<V +>{
      _CompletionEnv18 = ld `.CompletionEnv`;
      _CompletionEnv19 = force? _CompletionEnv18;
      checkMissing(_CompletionEnv19);
      c52 = `is.object`(_CompletionEnv19);
      if c52 then L1() else L2(_CompletionEnv19);
    L0(dx38):
      return dx38;
    L1():
      dr30 = tryDispatchBuiltin.1("[[", _CompletionEnv19);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(_CompletionEnv21):
      __4 = ldf `[[` in base;
      r47 = dyn __4(_CompletionEnv21, "linebuffer");
      goto L0(r47);
    L3():
      dx37 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx37);
    };
    p9 = prom<V +>{
      fullToken32 = ld fullToken;
      fullToken33 = force? fullToken32;
      checkMissing(fullToken33);
      c53 = `is.object`(fullToken33);
      if c53 then L1() else L2(fullToken33);
    L0(dx40):
      r50 = `-`(dx40, 2);
      return r50;
    L1():
      dr32 = tryDispatchBuiltin.1("$", fullToken33);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(fullToken35):
      r49 = `$`(fullToken35, <sym start>);
      goto L0(r49);
    L3():
      dx39 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx39);
    };
    p10 = prom<V +>{
      fullToken36 = ld fullToken;
      fullToken37 = force? fullToken36;
      checkMissing(fullToken37);
      c54 = `is.object`(fullToken37);
      if c54 then L1() else L2(fullToken37);
    L0(dx42):
      r53 = `-`(dx42, 1);
      return r53;
    L1():
      dr34 = tryDispatchBuiltin.1("$", fullToken37);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(fullToken39):
      r52 = `$`(fullToken39, <sym start>);
      goto L0(r52);
    L3():
      dx41 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx41);
    };
    r55 = dyn substr2(p8, p9, p10);
    check L122() else D24();
  L131():
    p14 = prom<V +>{
      substr3 = ldf substr;
      p11 = prom<V +>{
        _CompletionEnv22 = ld `.CompletionEnv`;
        _CompletionEnv23 = force? _CompletionEnv22;
        checkMissing(_CompletionEnv23);
        c66 = `is.object`(_CompletionEnv23);
        if c66 then L1() else L2(_CompletionEnv23);
      L0(dx46):
        return dx46;
      L1():
        dr38 = tryDispatchBuiltin.1("[[", _CompletionEnv23);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L3() else L2(dr38);
      L2(_CompletionEnv25):
        __5 = ldf `[[` in base;
        r59 = dyn __5(_CompletionEnv25, "linebuffer");
        goto L0(r59);
      L3():
        dx45 = getTryDispatchBuiltinValue(dr38);
        goto L0(dx45);
      };
      p12 = prom<V +>{
        fullToken44 = ld fullToken;
        fullToken45 = force? fullToken44;
        checkMissing(fullToken45);
        c67 = `is.object`(fullToken45);
        if c67 then L1() else L2(fullToken45);
      L0(dx48):
        r62 = `-`(dx48, 2);
        return r62;
      L1():
        dr40 = tryDispatchBuiltin.1("$", fullToken45);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L3() else L2(dr40);
      L2(fullToken47):
        r61 = `$`(fullToken47, <sym start>);
        goto L0(r61);
      L3():
        dx47 = getTryDispatchBuiltinValue(dr40);
        goto L0(dx47);
      };
      p13 = prom<V +>{
        fullToken48 = ld fullToken;
        fullToken49 = force? fullToken48;
        checkMissing(fullToken49);
        c68 = `is.object`(fullToken49);
        if c68 then L1() else L2(fullToken49);
      L0(dx50):
        r65 = `-`(dx50, 1);
        return r65;
      L1():
        dr42 = tryDispatchBuiltin.1("$", fullToken49);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L3() else L2(dr42);
      L2(fullToken51):
        r64 = `$`(fullToken51, <sym start>);
        goto L0(r64);
      L3():
        dx49 = getTryDispatchBuiltinValue(dr42);
        goto L0(dx49);
      };
      r67 = dyn substr3(p11, p12, p13);
      visible.0();
      return r67;
    };
    p15 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      c69 = ldf c in base;
      r71 = dyn c69("::");
      goto L0(r71);
    L2():
      r69 = dyn base1("::");
      goto L0(r69);
    };
    r73 = dyn _in_(p14, p15);
    check L132() else D27();
  L134():
    probablyHelp3 = force? probablyHelp2;
    checkMissing(probablyHelp3);
    c73 = `as.logical`(probablyHelp3);
    if c73 then L16(c73) else L135();
  L212():
    dr68 = tryDispatchBuiltin.0("[[<-", l12, fargComps1);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L214() else L213(fargComps1, dr68);
  L213(fargComps3, l14):
    ____3 = ldf `[[<-` in base;
    r164 = dyn ____3(l14, fargComps1, "comps");
    goto L33(r164);
  L218():
    st lastArithOp = r173;
    lastArithOp = ld lastArithOp;
    check L219() else D69();
  D24():
    deopt 96 [c46, c47, r55];
  D27():
    deopt 111 [c63, r73];
  D69():
    deopt 251 [lastArithOp];
  L16(c74):
    c79 = `as.logical`(c74);
    if c79 then L17(c79) else L138();
  L122():
    r56 = `==`(r55, "[[");
    c55 = `as.logical`(r56);
    c56 = `&&`(c47, c55);
    goto L14(c46, c56);
  L132():
    c70 = `as.logical`(r73);
    c71 = `&&`(c63, c70);
    goto L15(c71);
  L135():
    probablyName = ld probablyName;
    check L136() else D29();
  L214():
    dx77 = getTryDispatchBuiltinValue(dr68);
    goto L33(dx77);
  L219():
    lastArithOp1 = force? lastArithOp;
    checkMissing(lastArithOp1);
    r174 = `>`(lastArithOp1, 0.0);
    st haveArithOp = r174;
    c120 = `as.logical`(r174);
    if c120 then L220() else L35();
  D29():
    deopt 116 [c73, probablyName];
  L17(c80):
    st probablySpecial = c80;
    probablyHelp4 = ld probablyHelp;
    check L141() else D31();
  L35():
    goto L36();
  L36():
    specialOpLocs = ldf specialOpLocs;
    check L226() else D74();
  L136():
    probablyName1 = force? probablyName;
    checkMissing(probablyName1);
    c76 = `as.logical`(probablyName1);
    c77 = `||`(c73, c76);
    goto L16(c77);
  L138():
    probablyNamespace = ld probablyNamespace;
    check L139() else D30();
  L220():
    substr4 = ldf substr;
    check L221() else D70();
  D30():
    deopt 119 [c79, probablyNamespace];
  D31():
    deopt 123 [probablyHelp4];
  D70():
    deopt 257 [];
  D74():
    deopt 273 [];
  L139():
    probablyNamespace1 = force? probablyNamespace;
    checkMissing(probablyNamespace1);
    c82 = `as.logical`(probablyNamespace1);
    c83 = `||`(c79, c82);
    goto L17(c83);
  L141():
    probablyHelp5 = force? probablyHelp4;
    checkMissing(probablyHelp5);
    c85 = `as.logical`(probablyHelp5);
    if c85 then L142() else L18();
  L221():
    p32 = prom<V +>{
      text6 = ld text;
      text7 = force? text6;
      checkMissing(text7);
      return text7;
    };
    p33 = prom<V +>{
      lastArithOp2 = ld lastArithOp;
      lastArithOp3 = force? lastArithOp2;
      checkMissing(lastArithOp3);
      return lastArithOp3;
    };
    r177 = dyn substr4(p32, 1, p33);
    check L222() else D71();
  L226():
    p36 = prom<V +>{
      text10 = ld text;
      text11 = force? text10;
      checkMissing(text11);
      return text11;
    };
    r184 = dyn specialOpLocs(p36);
    check L227() else D75();
  D71():
    deopt 261 [r177];
  D75():
    deopt 275 [r184];
  L18():
    probablySpecial = ld probablySpecial;
    check L146() else D34();
  L19(r94):
    st tentativeCompletions = r94;
    _setFileComp = ldf `.setFileComp`;
    check L160() else D42();
  L142():
    substring = ldf substring;
    check L143() else D32();
  L222():
    st prefix = r177;
    substr5 = ldf substr;
    check L223() else D72();
  L227():
    st spl = r184;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L228() else L229();
  D32():
    deopt 126 [];
  D34():
    deopt 131 [probablySpecial];
  D42():
    deopt 155 [];
  D72():
    deopt 264 [];
  L37(r186):
    c121 = `as.logical`(r186);
    if c121 then L232() else L38();
  L143():
    p18 = prom<V +>{
      helpCompletions = ldf helpCompletions;
      p16 = prom<V +>{
        fullToken52 = ld fullToken;
        fullToken53 = force? fullToken52;
        checkMissing(fullToken53);
        c86 = `is.object`(fullToken53);
        if c86 then L1() else L2(fullToken53);
      L0(dx52):
        return dx52;
      L1():
        dr44 = tryDispatchBuiltin.1("$", fullToken53);
        dc22 = getTryDispatchBuiltinDispatched(dr44);
        if dc22 then L3() else L2(dr44);
      L2(fullToken55):
        r74 = `$`(fullToken55, <sym prefix>);
        goto L0(r74);
      L3():
        dx51 = getTryDispatchBuiltinValue(dr44);
        goto L0(dx51);
      };
      p17 = prom<V +>{
        fullToken56 = ld fullToken;
        fullToken57 = force? fullToken56;
        checkMissing(fullToken57);
        c87 = `is.object`(fullToken57);
        if c87 then L1() else L2(fullToken57);
      L0(dx54):
        return dx54;
      L1():
        dr46 = tryDispatchBuiltin.1("$", fullToken57);
        dc23 = getTryDispatchBuiltinDispatched(dr46);
        if dc23 then L3() else L2(dr46);
      L2(fullToken59):
        r76 = `$`(fullToken59, <sym token>);
        goto L0(r76);
      L3():
        dx53 = getTryDispatchBuiltinValue(dr46);
        goto L0(dx53);
      };
      r78 = dyn helpCompletions(p16, p17);
      return r78;
    };
    p19 = prom<V +>{
      sym2 = ldf nchar;
      base2 = ldf nchar in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r83, r84):
      r91 = `+`(r83, r84);
      return r91;
    L1():
      fullToken60 = ld fullToken;
      fullToken61 = force? fullToken60;
      checkMissing(fullToken61);
      c88 = `is.object`(fullToken61);
      if c88 then L4() else L5(2, fullToken61);
    L2():
      r82 = dyn base2(<lang `$`(fullToken, prefix)>);
      goto L0(2, r82);
    L3(r88, dx56):
      nchar = ldf nchar in base;
      r90 = dyn nchar(dx56, "chars", FALSE, NA_LGL);
      goto L0(r88, r90);
    L4():
      dr48 = tryDispatchBuiltin.1("$", fullToken61);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L6() else L5(2, dr48);
    L5(r86, fullToken63):
      r89 = `$`(fullToken63, <sym prefix>);
      goto L3(r86, r89);
    L6():
      dx55 = getTryDispatchBuiltinValue(dr48);
      goto L3(2, dx55);
    };
    r93 = dyn substring(p18, p19, 1000);
    check L144() else D33();
  L146():
    probablySpecial1 = force? probablySpecial;
    checkMissing(probablySpecial1);
    r95 = `!`(probablySpecial1);
    c89 = `as.logical`(r95);
    if c89 then L147() else L20();
  L160():
    r105 = dyn _setFileComp(FALSE);
    check L161() else D43();
  L223():
    p34 = prom<V +>{
      text8 = ld text;
      text9 = force? text8;
      checkMissing(text9);
      return text9;
    };
    p35 = prom<V +>{
      lastArithOp4 = ld lastArithOp;
      lastArithOp5 = force? lastArithOp4;
      checkMissing(lastArithOp5);
      r179 = `+`(lastArithOp5, 1);
      return r179;
    };
    r181 = dyn substr5(p34, p35, 1000000);
    check L224() else D73();
  L228():
    spl = ld spl;
    check L230() else D76();
  L229():
    r185 = dyn base8(<sym spl>);
    goto L37(r185);
  D33():
    deopt 130 [r93];
  D43():
    deopt 157 [r105];
  D73():
    deopt 268 [r181];
  D76():
    deopt 279 [spl];
  L20():
    sym3 = ldf `is.function`;
    base3 = ldf `is.function` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L151() else L152();
  L38():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L236() else L237();
  L39(r191):
    st comps = r191;
    haveArithOp = ld haveArithOp;
    check L243() else D85();
  L144():
    goto L19(r93);
  L147():
    fileCompletions = ldf fileCompletions;
    check L148() else D35();
  L161():
    substring1 = ldf substring;
    check L162() else D44();
  L224():
    st text = r181;
    goto L36();
  L230():
    spl1 = force? spl;
    checkMissing(spl1);
    length1 = ldf length in base;
    r187 = dyn length1(spl1);
    check L231() else D77();
  L232():
    specialCompletions = ldf specialCompletions;
    check L233() else D78();
  D35():
    deopt 135 [];
  D44():
    deopt 159 [];
  D77():
    deopt 282 [r187];
  D78():
    deopt 284 [];
  D85():
    deopt 306 [haveArithOp];
  L21(r100):
    c91 = `as.logical`(r100);
    if c91 then L156() else L22();
  L40(r193):
    r201 = `!`(r193);
    st appendFunctionSuffix = r201;
    normalCompletions = ldf normalCompletions;
    check L241() else D83();
  L148():
    p20 = prom<V +>{
      fullToken64 = ld fullToken;
      fullToken65 = force? fullToken64;
      checkMissing(fullToken65);
      c90 = `is.object`(fullToken65);
      if c90 then L1() else L2(fullToken65);
    L0(dx58):
      return dx58;
    L1():
      dr50 = tryDispatchBuiltin.1("$", fullToken65);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(fullToken67):
      r96 = `$`(fullToken67, <sym token>);
      goto L0(r96);
    L3():
      dx57 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx57);
    };
    r98 = dyn fileCompletions(p20);
    check L149() else D36();
  L151():
    rc_getOption1 = ldf `rc.getOption`;
    check L153() else D37();
  L152():
    r99 = dyn base3(<lang `<-`(fcustomQuote, rc.getOption("custom.quote.completer"))>);
    goto L21(r99);
  L162():
    p22 = prom<V +>{
      tentativeCompletions = ld tentativeCompletions;
      tentativeCompletions1 = force? tentativeCompletions;
      checkMissing(tentativeCompletions1);
      return tentativeCompletions1;
    };
    p23 = prom<V +>{
      sym4 = ldf nchar;
      base4 = ldf nchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r110, r111):
      r118 = `+`(r110, r111);
      sym5 = ldf nchar;
      base5 = ldf nchar in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L8() else L9();
    L2():
      fullToken70 = ld fullToken;
      fullToken71 = force? fullToken70;
      checkMissing(fullToken71);
      c92 = `is.object`(fullToken71);
      if c92 then L5() else L6(1, fullToken71);
    L3():
      r109 = dyn base4(<lang `$`(fullToken, token)>);
      goto L0(1, r109);
    L1(r122, r123):
      r125 = `-`(r122, r123);
      return r125;
    L4(r115, dx60):
      nchar1 = ldf nchar in base;
      r117 = dyn nchar1(dx60, "chars", FALSE, NA_LGL);
      goto L0(r115, r117);
    L5():
      dr52 = tryDispatchBuiltin.1("$", fullToken71);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L7() else L6(1, dr52);
    L6(r113, fullToken73):
      r116 = `$`(fullToken73, <sym token>);
      goto L4(r113, r116);
    L8():
      text = ld text;
      text1 = force? text;
      checkMissing(text1);
      nchar2 = ldf nchar in base;
      r124 = dyn nchar2(text1, "chars", FALSE, NA_LGL);
      goto L1(r118, r124);
    L9():
      r121 = dyn base5(<sym text>);
      goto L1(r118, r121);
    L7():
      dx59 = getTryDispatchBuiltinValue(dr52);
      goto L4(1, dx59);
    };
    r127 = dyn substring1(p22, p23, 1000);
    check L163() else D45();
  L231():
    goto L37(r187);
  L233():
    p37 = prom<V +>{
      text12 = ld text;
      text13 = force? text12;
      checkMissing(text13);
      return text13;
    };
    p38 = prom<V +>{
      spl2 = ld spl;
      spl3 = force? spl2;
      checkMissing(spl3);
      return spl3;
    };
    r190 = dyn specialCompletions(p37, p38);
    check L234() else D79();
  L236():
    _in_2 = ldf `%in%`;
    check L238() else D80();
  L237():
    r192 = dyn base9(<lang `%in%`(guessedFunction, c("help", "args", "formals", "example", "do.call", "environment", "page", "apply", "sapply", "lapply", "tapply", "mapply", "methods", "fix", "edit"))>);
    goto L40(r192);
  L243():
    haveArithOp1 = force? haveArithOp;
    checkMissing(haveArithOp1);
    c123 = `as.logical`(haveArithOp1);
    if c123 then L244() else L41(c123);
  D36():
    deopt 137 [r98];
  D37():
    deopt 141 [];
  D45():
    deopt 163 [r127];
  D79():
    deopt 287 [r190];
  D80():
    deopt 291 [];
  D83():
    deopt 300 [];
  L22():
    goto L19(NULL);
  L41(c125):
    c132 = `as.logical`(c125);
    if c132 then L250() else L43();
  L149():
    goto L19(r98);
  L153():
    r101 = dyn rc_getOption1("custom.quote.completer");
    check L154() else D38();
  L156():
    fcustomQuote = ldf fcustomQuote;
    check L157() else D40();
  L163():
    l3 = ld `.CompletionEnv`;
    c93 = `is.object`(l3);
    if c93 then L164() else L165(r127, l3);
  L234():
    goto L39(r190);
  L238():
    p39 = prom<V +>{
      guessedFunction12 = ld guessedFunction;
      guessedFunction13 = force? guessedFunction12;
      checkMissing(guessedFunction13);
      return guessedFunction13;
    };
    p40 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r196):
      return r196;
    L1():
      c122 = ldf c in base;
      r197 = dyn c122("help", "args", "formals", "example", "do.call", "environment", "page", "apply", "sapply", "lapply", "tapply", "mapply", "methods", "fix", "edit");
      goto L0(r197);
    L2():
      r195 = dyn base10("help", "args", "formals", "example", "do.call", "environment", "page", "apply", "sapply", "lapply", "tapply", "mapply", "methods", "fix", "edit");
      goto L0(r195);
    };
    r199 = dyn _in_2(p39, p40);
    check L239() else D81();
  L241():
    p41 = prom<V +>{
      text14 = ld text;
      text15 = force? text14;
      checkMissing(text15);
      return text15;
    };
    p42 = prom<V +>{
      appendFunctionSuffix = ld appendFunctionSuffix;
      appendFunctionSuffix1 = force? appendFunctionSuffix;
      checkMissing(appendFunctionSuffix1);
      return appendFunctionSuffix1;
    };
    r204 = dyn normalCompletions[, `check.mode`](p41, p42);
    check L242() else D84();
  L244():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L245() else L246();
  D38():
    deopt 143 [r101];
  D40():
    deopt 148 [];
  D81():
    deopt 294 [r199];
  D84():
    deopt 304 [r204];
  L23(r131, dx62):
    st `.CompletionEnv` = dx62;
    invisible.0();
    popenv;
    return r131;
  L42(c128, r206):
    c129 = `as.logical`(r206);
    c130 = `&&`(c128, c129);
    goto L41(c130);
  L43():
    goto L44();
  L44():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L254() else L255();
  L154():
    st fcustomQuote = r101;
    is_function1 = ldf `is.function` in base;
    r102 = dyn is_function1(r101);
    check L155() else D39();
  L157():
    p21 = prom<V +>{
      fullToken68 = ld fullToken;
      fullToken69 = force? fullToken68;
      checkMissing(fullToken69);
      return fullToken69;
    };
    r104 = dyn fcustomQuote(p21);
    check L158() else D41();
  L164():
    dr54 = tryDispatchBuiltin.0("[[<-", l3, r127);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L166() else L165(r127, dr54);
  L165(r129, l5):
    ____ = ldf `[[<-` in base;
    r132 = dyn ____(l5, r127, "comps");
    goto L23(r129, r132);
  L239():
    any = ldf any in base;
    r200 = dyn any(r199);
    check L240() else D82();
  L242():
    goto L39(r204);
  L245():
    comps = ld comps;
    check L247() else D86();
  L246():
    r205 = dyn base11(<sym comps>);
    goto L42(c123, r205);
  L250():
    paste0 = ldf paste0;
    check L251() else D88();
  D39():
    deopt 146 [r102];
  D41():
    deopt 150 [r104];
  D82():
    deopt 296 [r200];
  D86():
    deopt 310 [c123, comps];
  D88():
    deopt 316 [];
  L45(r213):
    st comps = r213;
    sym13 = ldf `is.function`;
    base13 = ldf `is.function` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L259() else L260();
  L155():
    goto L21(r102);
  L158():
    goto L19(r104);
  L166():
    dx61 = getTryDispatchBuiltinValue(dr54);
    goto L23(r127, dx61);
  L240():
    goto L40(r200);
  L247():
    comps1 = force? comps;
    checkMissing(comps1);
    length2 = ldf length in base;
    r207 = dyn length2(comps1);
    check L248() else D87();
  L251():
    p43 = prom<V +>{
      prefix = ld prefix;
      prefix1 = force? prefix;
      checkMissing(prefix1);
      return prefix1;
    };
    p44 = prom<V +>{
      comps2 = ld comps;
      comps3 = force? comps2;
      checkMissing(comps3);
      return comps3;
    };
    r210 = dyn paste0(p43, p44);
    check L252() else D89();
  L254():
    fargComps6 = ld fargComps;
    check L256() else D90();
  L255():
    r212 = dyn base12(<sym fargComps>, <sym comps>);
    goto L45(r212);
  D87():
    deopt 313 [c123, r207];
  D89():
    deopt 319 [r210];
  D90():
    deopt 325 [fargComps6];
  L46(r216):
    c134 = `as.logical`(r216);
    if c134 then L264() else L47();
  L248():
    goto L42(c123, r207);
  L252():
    st comps = r210;
    goto L44();
  L256():
    fargComps7 = force? fargComps6;
    checkMissing(fargComps7);
    comps4 = ld comps;
    check L257() else D91();
  L259():
    rc_getOption2 = ldf `rc.getOption`;
    check L261() else D93();
  L260():
    r215 = dyn base13(<lang `<-`(fcustom, rc.getOption("custom.argument.completer"))>);
    goto L46(r215);
  D91():
    deopt 327 [comps4];
  D93():
    deopt 335 [];
  L47():
    goto L49();
  L49():
    comps8 = ld comps;
    check L272() else D100();
  L257():
    comps5 = force? comps4;
    checkMissing(comps5);
    c133 = ldf c in base;
    r214 = dyn c133(fargComps7, comps5);
    check L258() else D92();
  L261():
    r217 = dyn rc_getOption2("custom.argument.completer");
    check L262() else D94();
  L264():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L265() else L266();
  D92():
    deopt 330 [r214];
  D94():
    deopt 337 [r217];
  D100():
    deopt 355 [comps8];
  L48(r220):
    st comps = r220;
    goto L49();
  L258():
    goto L45(r214);
  L262():
    st fcustom = r217;
    is_function2 = ldf `is.function` in base;
    r218 = dyn is_function2(r217);
    check L263() else D95();
  L265():
    fcustom = ldf fcustom;
    check L267() else D96();
  L266():
    r219 = dyn base14(<lang fcustom(guessedFunction, text)>, <sym comps>);
    goto L48(r219);
  L272():
    comps9 = force? comps8;
    checkMissing(comps9);
    l15 = ld `.CompletionEnv`;
    c136 = `is.object`(l15);
    if c136 then L273() else L274(comps9, l15);
  D95():
    deopt 340 [r218];
  D96():
    deopt 344 [];
  L50(comps13, dx82):
    st `.CompletionEnv` = dx82;
    invisible.0();
    popenv;
    return comps13;
  L263():
    goto L46(r218);
  L267():
    p45 = prom<V +>{
      guessedFunction14 = ld guessedFunction;
      guessedFunction15 = force? guessedFunction14;
      checkMissing(guessedFunction15);
      return guessedFunction15;
    };
    p46 = prom<V +>{
      text16 = ld text;
      text17 = force? text16;
      checkMissing(text17);
      return text17;
    };
    r223 = dyn fcustom(p45, p46);
    check L268() else D97();
  L273():
    dr72 = tryDispatchBuiltin.0("[[<-", l15, comps9);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L275() else L274(comps9, dr72);
  L274(comps11, l17):
    ____4 = ldf `[[<-` in base;
    r226 = dyn ____4(l17, comps9, "comps");
    goto L50(comps11, r226);
  D97():
    deopt 347 [r223];
  L268():
    comps6 = ld comps;
    check L269() else D98();
  L275():
    dx81 = getTryDispatchBuiltinValue(dr72);
    goto L50(comps9, dx81);
  D98():
    deopt 348 [comps6];
  L269():
    comps7 = force? comps6;
    checkMissing(comps7);
    c135 = ldf c in base;
    r224 = dyn c135(r223, comps7);
    check L270() else D99();
  D99():
    deopt 351 [r224];
  L270():
    goto L48(r224);
  }
}