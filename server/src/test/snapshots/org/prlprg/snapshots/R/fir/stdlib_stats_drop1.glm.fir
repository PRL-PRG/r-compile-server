fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner27813261;
    st `drop1.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner27813261(object, scope, scale, test, k, `...`) {
  (reg object:*, reg scope:*, reg scale:*, reg test:*, reg k:*, reg ddd:dots) -+> V { var object:*, var scope:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg match_arg:cls, reg test1:*, reg test2:V, reg p1:p(V +), reg r5:V, reg test3:*, reg test4:V, reg r6:V, reg c1:L, reg model_matrix:cls, reg object1:*, reg object2:V, reg p2:p(V +), reg r9:V, reg nrow:cls, reg x:*, reg x1:V, reg p3:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg x2:*, reg x3:V, reg attr:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg object3:*, reg object4:V, reg c2:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r17:V, reg attr1:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg missing:cls, reg r21:V, reg c3:L, reg drop_scope:cls, reg object7:*, reg object8:V, reg p4:p(V +), reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg scope1:*, reg scope2:V, reg c4:L, reg r27:V, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg terms:cls, reg update_formula:cls, reg object9:*, reg object10:V, reg p5:p(V +), reg scope3:*, reg scope4:V, reg p6:p(V +), reg r32:V, reg p7:p(V +), reg r34:V, reg attr2:cls, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg scope5:*, reg scope6:V, reg tl:*, reg tl1:V, reg match:cls, reg r41:V, reg r42:V, reg all:cls, reg r43:V, reg r44:V, reg c6:L, reg stop:cls, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg scope7:*, reg scope8:V, reg tl2:*, reg tl3:V, reg match1:cls, reg r48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg scope9:*, reg scope10:V, reg length:cls, reg r51:V, reg object11:*, reg object12:V, reg c7:L, reg object14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r52:V, reg object15:*, reg object16:V, reg c8:L, reg object18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r53:V, reg numeric:cls, reg ns:*, reg ns1:V, reg p8:p(V +), reg r55:V, reg numeric1:cls, reg ns2:*, reg ns3:V, reg p9:p(V +), reg r57:V, reg numeric2:cls, reg ns4:*, reg ns5:V, reg p10:p(V +), reg r59:V, reg object19:*, reg object20:V, reg c9:L, reg object22:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r60:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg y:*, reg y1:V, reg c10:V, reg c11:L, reg model_response:cls, reg model_frame:cls, reg object23:*, reg object24:V, reg p11:p(V +), reg r64:V, reg p12:p(V +), reg r66:V, reg is_factor:cls, reg y2:*, reg y3:V, reg p13:p(V +), reg r68:V, reg r69:V, reg c12:L, reg l:*, reg storage_mode__:cls, reg r70:V, reg r71:V, reg ____:cls, reg object25:*, reg object26:V, reg c13:L, reg object28:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r73:V, reg p14:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r75:V, reg r76:V, reg n:*, reg n1:V, reg rep_int:cls, reg r77:V, reg p15:p(V +), reg r79:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r80:V, reg r81:V, reg ns6:*, reg ns7:V, reg r82:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c14:L, reg x4:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r83:V, reg i7:I, reg r84:V, reg asgn:*, reg asgn1:V, reg r85:I, reg c15:L, reg i9:I, reg r87:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i11:I, reg dx11:V, reg asgn2:*, reg asgn3:V, reg ndrop:*, reg ndrop1:V, reg c16:L, reg i13:I, reg r89:V, reg asgn5:V, reg ndrop3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i15:I, reg r91:V, reg asgn7:V, reg dx13:V, reg i16:*, reg i17:V, reg __:cls, reg r92:V, reg r93:V, reg __1:cls, reg r94:V, reg setdiff:cls, reg seq:cls, reg ncol:cls, reg x5:*, reg x6:V, reg p16:p(V +), reg r96:V, reg p17:p(V +), reg r98:V, reg p18:p(V +), reg ii:*, reg ii1:V, reg p19:p(V +), reg r101:V, reg glm_fit:cls, reg x7:*, reg x8:V, reg c17:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg jj:*, reg jj1:V, reg __2:cls, reg r102:V, reg p20:p(V +), reg y4:*, reg y5:V, reg p21:p(V +), reg wt:*, reg wt1:V, reg p22:p(V +), reg object29:*, reg object30:V, reg c18:L, reg object32:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r106:V, reg p23:p(V +), reg object33:*, reg object34:V, reg c19:L, reg object36:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r108:V, reg p24:p(V +), reg object37:*, reg object38:V, reg c20:L, reg object40:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r110:V, reg p25:p(V +), reg r112:V, reg z:*, reg z1:V, reg c21:L, reg i19:I, reg z3:V, reg dr22:V, reg dc11:L, reg dx22:V, reg i21:I, reg dx23:V, reg r113:V, reg l2:*, reg c22:L, reg i23:I, reg dx25:V, reg l4:*, reg dr24:V, reg dc12:L, reg dx27:V, reg i25:I, reg dx29:V, reg i26:*, reg i27:V, reg ___:cls, reg r114:V, reg z4:*, reg z5:V, reg c23:L, reg i29:I, reg z7:V, reg dr26:V, reg dc13:L, reg dx30:V, reg i31:I, reg dx31:V, reg r115:V, reg l5:*, reg c24:L, reg i33:I, reg dx33:V, reg l7:*, reg dr28:V, reg dc14:L, reg dx35:V, reg i35:I, reg dx37:V, reg i36:*, reg i37:V, reg ___1:cls, reg r116:V, reg test5:*, reg test6:V, reg r117:V, reg c25:L, reg z8:*, reg z9:V, reg c26:L, reg i41:I, reg z11:V, reg dr30:V, reg dc15:L, reg dx38:V, reg i43:I, reg dx39:V, reg r118:V, reg z12:*, reg z13:V, reg c27:L, reg i45:I, reg z15:V, reg dr32:V, reg dc16:L, reg dx40:V, reg i47:I, reg dx41:V, reg r119:V, reg glm_fit1:cls, reg x11:*, reg x12:V, reg p26:p(V +), reg r121:*, reg r122:V, reg p27:p(V +), reg w:*, reg w1:V, reg p28:p(V +), reg r125:V, reg zz:*, reg zz1:V, reg c28:L, reg i49:I, reg zz3:V, reg dr34:V, reg dc17:L, reg dx42:V, reg i51:I, reg dx43:V, reg r126:V, reg zz4:*, reg zz5:V, reg c29:L, reg i53:I, reg dx45:V, reg zz7:V, reg dr36:V, reg dc18:L, reg dx47:V, reg i55:I, reg dx48:V, reg dx49:V, reg r127:V, reg r128:V, reg l8:*, reg c30:L, reg i57:I, reg r130:V, reg l10:*, reg dr38:V, reg dc19:L, reg dx50:V, reg i59:I, reg r132:V, reg dx51:V, reg i60:*, reg i61:V, reg ___2:cls, reg r133:V, reg i62:I, reg sym14:cls, reg base14:cls, reg guard14:L, reg r135:V, reg r136:V, reg scope11:*, reg scope12:V, reg c31:cls, reg r137:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r138:V, reg r139:V, reg object41:*, reg object42:V, reg c32:L, reg object44:V, reg dr40:V, reg dc20:L, reg dx52:V, reg dx53:V, reg r140:V, reg dfs:*, reg dfs1:V, reg c33:cls, reg r141:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r142:V, reg r143:V, reg chisq:*, reg chisq1:V, reg dev:*, reg dev1:V, reg c34:cls, reg r144:V, reg test7:*, reg test8:V, reg r145:V, reg c35:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r146:V, reg r147:V, reg score:*, reg score1:V, reg c36:cls, reg r148:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r150:V, reg r151:V, reg scale1:*, reg scale2:V, reg c37:V, reg c38:L, reg c39:V, reg scale3:*, reg scale4:V, reg r152:V, reg c41:L, reg c42:V, reg c44:L, reg summary:cls, reg object45:*, reg object46:V, reg p29:p(V +), reg r154:V, reg c45:L, reg r156:V, reg dr42:V, reg dc21:L, reg dx54:V, reg dx55:V, reg r157:V, reg dx56:V, reg scale5:*, reg scale6:V, reg object47:*, reg object48:V, reg c46:L, reg object50:V, reg dr44:V, reg dc22:L, reg dx57:V, reg dx58:V, reg r158:V, reg c47:L, reg dx60:V, reg dr46:V, reg dc23:L, reg dx61:V, reg dx62:V, reg r159:V, reg fam:*, reg fam1:V, reg r160:V, reg c48:L, reg scale7:*, reg scale8:V, reg r161:V, reg c49:L, reg dev2:*, reg dev3:V, reg scale9:*, reg scale10:V, reg r162:V, reg n2:*, reg n3:V, reg r163:V, reg r164:V, reg n4:*, reg n5:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r165:V, reg n8:V, reg r166:V, reg dev4:*, reg dev5:V, reg n9:*, reg n10:V, reg r167:V, reg r168:V, reg r169:V, reg r170:V, reg dev6:*, reg dev7:V, reg dispersion:*, reg dispersion1:V, reg r171:V, reg loglik:*, reg loglik1:V, reg k1:*, reg k2:V, reg dfs2:*, reg dfs3:V, reg r172:V, reg r173:V, reg dfs4:*, reg dfs5:V, reg c50:L, reg dfs7:V, reg dr48:V, reg dc24:L, reg dx63:V, reg dx64:V, reg __3:cls, reg r174:V, reg dfs8:*, reg dfs9:V, reg r175:V, reg l11:*, reg c51:L, reg r177:L, reg l13:*, reg dr50:V, reg dc25:L, reg dx65:V, reg dx66:V, reg ___3:cls, reg r180:V, reg aic:*, reg aic1:V, reg extractAIC:cls, reg object51:*, reg object52:V, reg p30:p(V +), reg k3:*, reg k4:V, reg p31:p(V +), reg r183:V, reg c52:L, reg aic3:V, reg r185:V, reg dr52:V, reg dc26:L, reg dx67:V, reg aic5:V, reg dx68:V, reg __4:cls, reg r186:V, reg aic6:*, reg aic7:V, reg c53:L, reg aic10:V, reg dx70:V, reg aic11:V, reg dr54:V, reg dc27:L, reg dx72:V, reg aic13:V, reg dx73:V, reg dx74:V, reg __5:cls, reg r187:V, reg r188:V, reg r189:V, reg data_frame:cls, reg dfs10:*, reg dfs11:V, reg p32:p(V +), reg dev8:*, reg dev9:V, reg p33:p(V +), reg aic14:*, reg aic15:V, reg p34:p(V +), reg scope13:*, reg scope14:V, reg p35:p(V +), reg r194:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r195:V, reg r196:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r197:V, reg r198:V, reg aic16:*, reg aic17:V, reg is_na:cls, reg r199:V, reg all1:cls, reg r200:V, reg c54:L, reg aod:*, reg aod1:V, reg c55:L, reg dr56:V, reg dc28:L, reg dx75:V, reg dx76:V, reg __6:cls, reg r201:V, reg test9:*, reg test10:V, reg r202:V, reg c56:L, reg pmax:cls, reg loglik2:*, reg loglik3:V, reg loglik4:*, reg loglik5:V, reg c57:L, reg loglik8:V, reg loglik9:V, reg dr58:V, reg dc29:L, reg dx78:V, reg loglik11:V, reg dx79:V, reg __7:cls, reg r203:V, reg r204:V, reg p36:p(V +), reg r206:V, reg l14:*, reg c58:L, reg r208:L, reg l16:*, reg dr60:V, reg dc30:L, reg dx80:V, reg dx81:V, reg ___4:cls, reg r211:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r212:V, reg r213:V, reg dev10:*, reg dev11:V, reg is_na1:cls, reg r214:V, reg r215:V, reg dispersion2:*, reg dispersion3:V, reg r216:V, reg c59:L, reg r217:S, reg dev12:*, reg dev13:V, reg l17:*, reg c60:L, reg dev15:V, reg l19:*, reg dr62:V, reg dc31:L, reg dx82:V, reg dx83:V, reg LRT:*, reg LRT1:V, reg ___5:cls, reg r218:V, reg safe_pchisq:cls, reg dev18:*, reg dev19:V, reg c61:L, reg dev21:V, reg dr64:V, reg dc32:L, reg dx84:V, reg dx85:V, reg nas:*, reg nas1:V, reg __8:cls, reg r219:V, reg p37:p(V +), reg aod4:*, reg aod5:V, reg c62:L, reg aod7:V, reg dr66:V, reg dc33:L, reg dx86:V, reg dx87:V, reg r221:V, reg c63:L, reg dx89:V, reg dr68:V, reg dc34:L, reg dx90:V, reg dx91:V, reg nas2:*, reg nas3:V, reg __9:cls, reg r222:V, reg p38:p(V +), reg r224:V, reg l20:*, reg c64:L, reg r226:V, reg l22:*, reg dr70:V, reg dc35:L, reg dx92:V, reg dx93:V, reg nas4:*, reg nas5:V, reg ___6:cls, reg r229:V, reg dev22:*, reg dev23:V, reg l23:*, reg c65:L, reg dev25:V, reg dr72:V, reg dc36:L, reg dx94:V, reg dev27:V, reg dx95:V, reg ___7:cls, reg r230:V, reg test11:*, reg test12:V, reg r231:V, reg c66:L, reg pmax1:cls, reg score2:*, reg score3:V, reg p39:p(V +), reg r233:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r234:V, reg r235:V, reg dev29:*, reg dev30:V, reg is_na2:cls, reg r236:V, reg r237:V, reg dispersion4:*, reg dispersion5:V, reg r238:V, reg c67:L, reg r239:S, reg dev31:*, reg dev32:V, reg dispersion6:*, reg dispersion7:V, reg r240:V, reg dev33:*, reg dev34:V, reg l26:*, reg c68:L, reg dev36:V, reg l28:*, reg dr74:V, reg dc37:L, reg dx96:V, reg dx97:V, reg SC:*, reg SC1:V, reg ___8:cls, reg r241:V, reg safe_pchisq1:cls, reg dev39:*, reg dev40:V, reg c69:L, reg dev42:V, reg dr76:V, reg dc38:L, reg dx98:V, reg dx99:V, reg nas6:*, reg nas7:V, reg __10:cls, reg r242:V, reg p40:p(V +), reg aod8:*, reg aod9:V, reg c70:L, reg aod11:V, reg dr78:V, reg dc39:L, reg dx100:V, reg dx101:V, reg r244:V, reg c71:L, reg dx103:V, reg dr80:V, reg dc40:L, reg dx104:V, reg dx105:V, reg nas8:*, reg nas9:V, reg __11:cls, reg r245:V, reg p41:p(V +), reg r247:V, reg l29:*, reg c72:L, reg r249:V, reg l31:*, reg dr82:V, reg dc41:L, reg dx106:V, reg dx107:V, reg nas10:*, reg nas11:V, reg ___9:cls, reg r252:V, reg dev43:*, reg dev44:V, reg l32:*, reg c73:L, reg dev46:V, reg dr84:V, reg dc42:L, reg dx108:V, reg dev48:V, reg dx109:V, reg ___10:cls, reg r253:V, reg test13:*, reg test14:V, reg r254:V, reg c74:L, reg fam2:*, reg fam3:V, reg r255:V, reg c75:L, reg c76:V, reg fam4:*, reg fam5:V, reg r256:V, reg c78:L, reg c79:V, reg c81:L, reg warning:cls, reg gettextf:cls, reg fam6:*, reg fam7:V, reg p42:p(V +), reg r258:V, reg p43:p(V +), reg r260:V, reg aod12:*, reg aod13:V, reg c82:L, reg aod15:V, reg dr86:V, reg dc43:L, reg dx110:V, reg dx111:V, reg r262:V, reg dev49:*, reg dev50:V, reg c83:L, reg dev52:V, reg dr88:V, reg dc44:L, reg dx112:V, reg dx113:V, reg __12:cls, reg r263:V, reg rdf:*, reg rdf1:V, reg r264:V, reg pmax2:cls, reg dev53:*, reg dev54:V, reg dev55:*, reg dev56:V, reg c84:L, reg dev59:V, reg dev60:V, reg dr90:V, reg dc45:L, reg dx114:V, reg dev62:V, reg dx115:V, reg __13:cls, reg r265:V, reg r266:V, reg p44:p(V +), reg r268:V, reg aod16:*, reg aod17:V, reg c85:L, reg aod19:V, reg dr92:V, reg dc46:L, reg dx116:V, reg dx117:V, reg r269:V, reg object53:*, reg object54:V, reg c86:L, reg object56:V, reg dr94:V, reg dc47:L, reg dx118:V, reg dx119:V, reg r270:V, reg dev63:*, reg dev64:V, reg dfs12:*, reg dfs13:V, reg r271:V, reg rms:*, reg rms1:V, reg r272:V, reg l35:*, reg c87:L, reg r274:L, reg l37:*, reg dr96:V, reg dc48:L, reg dx120:V, reg dx121:V, reg dfs14:*, reg dfs15:V, reg r277:V, reg ___11:cls, reg r278:V, reg Fs:*, reg Fs1:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r279:V, reg r280:V, reg Fs2:*, reg Fs3:V, reg is_na3:cls, reg r281:V, reg r282:V, reg safe_pf:cls, reg Fs4:*, reg Fs5:V, reg c88:L, reg Fs7:V, reg dr98:V, reg dc49:L, reg dx122:V, reg dx123:V, reg nas12:*, reg nas13:V, reg __14:cls, reg r283:V, reg p45:p(V +), reg dfs16:*, reg dfs17:V, reg c89:L, reg dfs19:V, reg dr100:V, reg dc50:L, reg dx124:V, reg dx125:V, reg nas14:*, reg nas15:V, reg __15:cls, reg r285:V, reg p46:p(V +), reg rdf2:*, reg rdf3:V, reg p47:p(V +), reg r288:V, reg l38:*, reg c90:L, reg r290:V, reg l40:*, reg dr102:V, reg dc51:L, reg dx126:V, reg dx127:V, reg nas16:*, reg nas17:V, reg ___12:cls, reg r293:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r294:V, reg r295:V, reg Fs8:*, reg Fs9:V, reg P:*, reg P1:V, reg list:cls, reg r296:V, reg l41:*, reg c91:L, reg r298:V, reg l43:*, reg dr104:V, reg dc52:L, reg dx128:V, reg r300:V, reg dx129:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r305:V, reg r306:V, reg r307:V, reg r308:V, reg c92:cls, reg r309:V, reg ___13:cls, reg r310:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r311:V, reg r312:V, reg deparse:cls, reg formula:cls, reg object57:*, reg object58:V, reg p48:p(V +), reg r314:V, reg p49:p(V +), reg r316:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r317:V, reg r318:V, reg scale11:*, reg scale12:V, reg c93:V, reg r319:V, reg c94:L, reg c96:V, reg scale13:*, reg scale14:V, reg r320:V, reg c97:L, reg c98:V, reg c100:L, reg paste:cls, reg format:cls, reg scale15:*, reg scale16:V, reg p50:p(V +), reg r322:V, reg p51:p(V +), reg r324:V, reg r325:V, reg c101:cls, reg r326:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r327:V, reg r328:V, reg c102:cls, reg r329:V, reg l47:*, reg class__:cls, reg r330:V, reg head:*, reg head1:V, reg l48:*, reg attr__:cls, reg r331:V, reg aod20:*, reg aod21:V |
    mkenv;
    st object = object;
    st scope = scope;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(0.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L1() else L2(test);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("none", "Rao", "LRT", "Chisq", "F");
      goto L0(r2);
    L2():
      r = dyn base("none", "Rao", "LRT", "Chisq", "F");
      goto L0(r);
    };
    goto L2(p);
  L2(test_orDefault):
    st test = test_orDefault;
    k_isMissing = missing.0(k);
    if k_isMissing then L3(2.0) else L3(k);
  L3(k_orDefault):
    st k = k_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L93() else D0();
  D0():
    deopt 1 [];
  L93():
    p1 = prom<V +>{
      test1 = ld test;
      test2 = force? test1;
      checkMissing(test2);
      return test2;
    };
    r5 = dyn match_arg(p1);
    check L94() else D1();
  D1():
    deopt 3 [r5];
  L94():
    st test = r5;
    test3 = ld test;
    check L95() else D2();
  D2():
    deopt 5 [test3];
  L95():
    test4 = force? test3;
    checkMissing(test4);
    r6 = `==`(test4, "Chisq");
    c1 = `as.logical`(r6);
    if c1 then L96() else L4();
  L4():
    goto L5();
  L5():
    model_matrix = ldf `model.matrix`;
    check L98() else D3();
  L96():
    st test = "LRT";
    goto L5();
  D3():
    deopt 15 [];
  L98():
    p2 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r9 = dyn model_matrix(p2);
    check L99() else D4();
  D4():
    deopt 17 [r9];
  L99():
    st x = r9;
    nrow = ldf nrow;
    check L100() else D5();
  D5():
    deopt 20 [];
  L100():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r11 = dyn nrow(p3);
    check L101() else D6();
  D6():
    deopt 22 [r11];
  L101():
    st n = r11;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L102() else L103();
  L6(r13):
    st asgn = r13;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L106() else L107();
  L102():
    x2 = ld x;
    check L104() else D7();
  L103():
    r12 = dyn base1(<sym x>, "assign");
    goto L6(r12);
  D7():
    deopt 26 [x2];
  L7(r16):
    st tl = r16;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L114() else L115();
  L104():
    x3 = force? x2;
    checkMissing(x3);
    attr = ldf attr in base;
    r14 = dyn attr(x3, "assign");
    check L105() else D8();
  L106():
    object3 = ld object;
    check L108() else D9();
  L107():
    r15 = dyn base2(<lang `$`(object, terms)>, "term.labels");
    goto L7(r15);
  D8():
    deopt 30 [r14];
  D9():
    deopt 34 [object3];
  L8(r20):
    c3 = `as.logical`(r20);
    if c3 then L116() else L9();
  L105():
    goto L6(r14);
  L108():
    object4 = force? object3;
    checkMissing(object4);
    c2 = `is.object`(object4);
    if c2 then L110() else L111(object4);
  L114():
    missing = ldf missing in base;
    r21 = dyn missing(<sym scope>);
    goto L8(r21);
  L115():
    r19 = dyn base3(<sym scope>);
    goto L8(r19);
  L9():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L120() else L121();
  L10():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L142() else L143();
  L109(dx1):
    attr1 = ldf attr in base;
    r18 = dyn attr1(dx1, "term.labels");
    check L113() else D10();
  L110():
    dr = tryDispatchBuiltin.1("$", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L112() else L111(dr);
  L111(object6):
    r17 = `$`(object6, <sym terms>);
    goto L109(r17);
  L116():
    drop_scope = ldf `drop.scope`;
    check L117() else D11();
  D10():
    deopt 39 [r18];
  D11():
    deopt 45 [];
  L11(r26):
    r27 = `!`(r26);
    c5 = `as.logical`(r27);
    if c5 then L123() else L12();
  L18(r47):
    st ndrop = r47;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L147() else L148();
  L112():
    dx = getTryDispatchBuiltinValue(dr);
    goto L109(dx);
  L113():
    goto L7(r18);
  L117():
    p4 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r23 = dyn drop_scope(p4);
    check L118() else D12();
  L120():
    scope1 = ld scope;
    check L122() else D13();
  L121():
    r25 = dyn base4(<sym scope>);
    goto L11(r25);
  L142():
    scope7 = ld scope;
    check L144() else D23();
  L143():
    r46 = dyn base8(<sym scope>, <sym tl>);
    goto L18(r46);
  D12():
    deopt 47 [r23];
  D13():
    deopt 50 [scope1];
  D23():
    deopt 91 [scope7];
  L12():
    goto L14();
  L14():
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L130() else L131();
  L19(r50):
    st ns = r50;
    object11 = ld object;
    check L151() else D28();
  L118():
    st scope = r23;
    goto L10();
  L122():
    scope2 = force? scope1;
    checkMissing(scope2);
    c4 = `is.character`(scope2);
    goto L11(c4);
  L123():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L124() else L125();
  L144():
    scope8 = force? scope7;
    checkMissing(scope8);
    tl2 = ld tl;
    check L145() else D24();
  L147():
    scope9 = ld scope;
    check L149() else D26();
  L148():
    r49 = dyn base9(<sym scope>);
    goto L19(r49);
  D24():
    deopt 93 [tl2];
  D26():
    deopt 102 [scope9];
  D28():
    deopt 107 [object11];
  L13(r29):
    st scope = r29;
    goto L14();
  L15(r38):
    r44 = `!`(r38);
    c6 = `as.logical`(r44);
    if c6 then L138() else L17();
  L124():
    terms = ldf terms;
    check L126() else D14();
  L125():
    r28 = dyn base5(<lang terms(update.formula(object, scope))>, "term.labels");
    goto L13(r28);
  L130():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L132() else L133();
  L131():
    r37 = dyn base6(<lang `>`(match(scope, tl, 0), 0)>);
    goto L15(r37);
  L145():
    tl3 = force? tl2;
    checkMissing(tl3);
    match1 = ldf match in base;
    r48 = dyn match1(scope8, tl3, NA_INT, NULL);
    check L146() else D25();
  L149():
    scope10 = force? scope9;
    checkMissing(scope10);
    length = ldf length in base;
    r51 = dyn length(scope10);
    check L150() else D27();
  L151():
    object12 = force? object11;
    checkMissing(object12);
    c7 = `is.object`(object12);
    if c7 then L153() else L154(object12);
  D14():
    deopt 57 [];
  D25():
    deopt 98 [r48];
  D27():
    deopt 105 [r51];
  L16(r40):
    r42 = `>`(r40, 0);
    all = ldf all in base;
    r43 = dyn all(r42);
    check L137() else D20();
  L17():
    goto L10();
  L126():
    p7 = prom<V +>{
      update_formula = ldf `update.formula`;
      p5 = prom<V +>{
        object9 = ld object;
        object10 = force? object9;
        checkMissing(object10);
        return object10;
      };
      p6 = prom<V +>{
        scope3 = ld scope;
        scope4 = force? scope3;
        checkMissing(scope4);
        return scope4;
      };
      r32 = dyn update_formula(p5, p6);
      return r32;
    };
    r34 = dyn terms(p7);
    check L127() else D15();
  L132():
    scope5 = ld scope;
    check L134() else D17();
  L133():
    r39 = dyn base7(<sym scope>, <sym tl>, 0);
    goto L16(r39);
  L138():
    stop = ldf stop;
    check L139() else D21();
  L146():
    goto L18(r48);
  L150():
    goto L19(r51);
  L152(dx3):
    st rdf = dx3;
    object15 = ld object;
    check L156() else D29();
  L153():
    dr2 = tryDispatchBuiltin.1("$", object12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L155() else L154(dr2);
  L154(object14):
    r52 = `$`(object14, <sym df.residual>);
    goto L152(r52);
  D15():
    deopt 59 [r34];
  D17():
    deopt 70 [scope5];
  D20():
    deopt 81 [r43];
  D21():
    deopt 84 [];
  D29():
    deopt 111 [object15];
  L127():
    attr2 = ldf attr in base;
    r35 = dyn attr2(r34, "term.labels");
    check L128() else D16();
  L134():
    scope6 = force? scope5;
    checkMissing(scope6);
    tl = ld tl;
    check L135() else D18();
  L137():
    goto L15(r43);
  L139():
    r45 = dyn stop("scope is not a subset of term labels");
    check L140() else D22();
  L155():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L152(dx2);
  L156():
    object16 = force? object15;
    checkMissing(object16);
    c8 = `is.object`(object16);
    if c8 then L158() else L159(object16);
  D16():
    deopt 62 [r35];
  D18():
    deopt 72 [tl];
  D22():
    deopt 86 [r45];
  L128():
    goto L13(r35);
  L135():
    tl1 = force? tl;
    checkMissing(tl1);
    match = ldf match in base;
    r41 = dyn match(scope6, tl1, 0, NULL);
    check L136() else D19();
  L140():
    goto L10();
  L157(dx5):
    st chisq = dx5;
    numeric = ldf numeric;
    check L161() else D30();
  L158():
    dr4 = tryDispatchBuiltin.1("$", object16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L160() else L159(dr4);
  L159(object18):
    r53 = `$`(object18, <sym deviance>);
    goto L157(r53);
  D19():
    deopt 77 [r41];
  D30():
    deopt 116 [];
  L136():
    goto L16(r41);
  L160():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L157(dx4);
  L161():
    p8 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r55 = dyn numeric(p8);
    check L162() else D31();
  D31():
    deopt 118 [r55];
  L162():
    st dfs = r55;
    numeric1 = ldf numeric;
    check L163() else D32();
  D32():
    deopt 121 [];
  L163():
    p9 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    r57 = dyn numeric1(p9);
    check L164() else D33();
  D33():
    deopt 123 [r57];
  L164():
    st dev = r57;
    numeric2 = ldf numeric;
    check L165() else D34();
  D34():
    deopt 126 [];
  L165():
    p10 = prom<V +>{
      ns4 = ld ns;
      ns5 = force? ns4;
      checkMissing(ns5);
      return ns5;
    };
    r59 = dyn numeric2(p10);
    check L166() else D35();
  D35():
    deopt 128 [r59];
  L166():
    st score = r59;
    object19 = ld object;
    check L167() else D36();
  D36():
    deopt 130 [object19];
  L167():
    object20 = force? object19;
    checkMissing(object20);
    c9 = `is.object`(object20);
    if c9 then L169() else L170(object20);
  L168(dx7):
    st y = dx7;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L172() else L173();
  L169():
    dr6 = tryDispatchBuiltin.1("$", object20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L171() else L170(dr6);
  L170(object22):
    r60 = `$`(object22, <sym y>);
    goto L168(r60);
  L20(r62):
    c11 = `as.logical`(r62);
    if c11 then L175() else L21();
  L171():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L168(dx6);
  L172():
    y = ld y;
    check L174() else D37();
  L173():
    r61 = dyn base10(<sym y>);
    goto L20(r61);
  D37():
    deopt 135 [y];
  L21():
    goto L24();
  L24():
    ____ = ldf `%||%`;
    check L185() else D44();
  L174():
    y1 = force? y;
    checkMissing(y1);
    c10 = `==`(y1, NULL);
    goto L20(c10);
  L175():
    model_response = ldf `model.response`;
    check L176() else D38();
  D38():
    deopt 139 [];
  D44():
    deopt 160 [];
  L176():
    p12 = prom<V +>{
      model_frame = ldf `model.frame`;
      p11 = prom<V +>{
        object23 = ld object;
        object24 = force? object23;
        checkMissing(object24);
        return object24;
      };
      r64 = dyn model_frame(p11);
      return r64;
    };
    r66 = dyn model_response(p12);
    check L177() else D39();
  L185():
    p14 = prom<V +>{
      object25 = ld object;
      object26 = force? object25;
      checkMissing(object26);
      c13 = `is.object`(object26);
      if c13 then L1() else L2(object26);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", object26);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(object28):
      r73 = `$`(object28, <sym prior.weights>);
      goto L0(r73);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p15 = prom<V +>{
      sym11 = ldf `rep.int`;
      base11 = ldf `rep.int` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r76):
      return r76;
    L1():
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      rep_int = ldf `rep.int` in base;
      r77 = dyn rep_int(1.0, n1);
      goto L0(r77);
    L2():
      r75 = dyn base11(1.0, <sym n>);
      goto L0(r75);
    };
    r79 = dyn ____(p14, p15);
    check L186() else D45();
  D39():
    deopt 141 [r66];
  D45():
    deopt 163 [r79];
  L177():
    st y = r66;
    is_factor = ldf `is.factor`;
    check L178() else D40();
  L186():
    st wt = r79;
    sym12 = ldf seq_len;
    base12 = ldf seq_len in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L187() else L188();
  D40():
    deopt 144 [];
  L25(r81):
    s = toForSeq(r81);
    l1 = length(s);
    i = 0;
    goto L26(i);
  L178():
    p13 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r68 = dyn is_factor(p13);
    check L179() else D41();
  L187():
    ns6 = ld ns;
    check L189() else D46();
  L188():
    r80 = dyn base12(<sym ns>);
    goto L25(r80);
  D41():
    deopt 146 [r68];
  D46():
    deopt 166 [ns6];
  L26(i1):
    i2 = `+`.1(i1, 1);
    c14 = `<`.1(l1, i2);
    if c14 then L190() else L35();
  L179():
    r69 = `!`(r68);
    c12 = `as.logical`(r69);
    if c12 then L180() else L22();
  L189():
    ns7 = force? ns6;
    checkMissing(ns7);
    r82 = seq_len(ns7);
    goto L25(r82);
  L22():
    goto L23(NULL);
  L23(r71):
    goto L24();
  L35():
    x4 = `[[`(s, i2, NULL, TRUE);
    st i = x4;
    sym13 = ldf seq_along;
    base13 = ldf seq_along in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L191() else L192();
  L180():
    l = ld y;
    storage_mode__ = ldf `storage.mode<-`;
    check L181() else D42();
  L190():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L254() else L255();
  D42():
    deopt 151 ["double", l, "double"];
  L27(i7, r84):
    c15 = `is.object`(r84);
    if c15 then L194() else L195(i7, r84);
  L36(r136):
    st scope = r136;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L258() else L259();
  L181():
    r70 = dyn storage_mode__(l, NULL, "double");
    check L182() else D43();
  L191():
    asgn = ld asgn;
    check L193() else D47();
  L192():
    r83 = dyn base13(<sym asgn>);
    goto L27(i2, r83);
  L254():
    scope11 = ld scope;
    check L256() else D67();
  L255():
    r135 = dyn base14("<none>", <sym scope>);
    goto L36(r135);
  D43():
    deopt 153 ["double", r70];
  D47():
    deopt 170 [i2, asgn];
  D67():
    deopt 255 [scope11];
  L28(i11, dx11):
    st ii = dx11;
    setdiff = ldf setdiff;
    check L203() else D51();
  L37(r139):
    st dfs = r139;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L267() else L268();
  L182():
    st y = r70;
    goto L23("double");
  L193():
    asgn1 = force? asgn;
    checkMissing(asgn1);
    r85 = seq_along(asgn1);
    goto L27(i2, r85);
  L194():
    dr10 = tryDispatchBuiltin.1("[", r84);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L196() else L195(i7, dr10);
  L195(i9, r87):
    asgn2 = ld asgn;
    check L197() else D48();
  L256():
    scope12 = force? scope11;
    checkMissing(scope12);
    c31 = ldf c in base;
    r137 = dyn c31("<none>", scope12);
    check L257() else D68();
  L258():
    object41 = ld object;
    check L260() else D69();
  L259():
    r138 = dyn base15(<lang `$`(object, rank)>, <sym dfs>);
    goto L37(r138);
  D48():
    deopt 173 [i9, r87, asgn2];
  D51():
    deopt 183 [i11];
  D68():
    deopt 258 [r137];
  D69():
    deopt 262 [object41];
  L38(r143):
    st dev = r143;
    test7 = ld test;
    check L272() else D75();
  L196():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L28(i7, dx10);
  L197():
    asgn3 = force? asgn2;
    checkMissing(asgn3);
    ndrop = ld ndrop;
    check L198() else D49();
  L203():
    p18 = prom<V +>{
      seq = ldf seq;
      p17 = prom<V +>{
        ncol = ldf ncol;
        p16 = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          return x6;
        };
        r96 = dyn ncol(p16);
        return r96;
      };
      r98 = dyn seq(p17);
      return r98;
    };
    p19 = prom<V +>{
      ii = ld ii;
      ii1 = force? ii;
      checkMissing(ii1);
      return ii1;
    };
    r101 = dyn setdiff(p18, p19);
    check L204() else D52();
  L257():
    goto L36(r137);
  L260():
    object42 = force? object41;
    checkMissing(object42);
    c32 = `is.object`(object42);
    if c32 then L262() else L263(object42);
  L267():
    chisq = ld chisq;
    check L269() else D72();
  L268():
    r142 = dyn base16(<sym chisq>, <sym dev>);
    goto L38(r142);
  D49():
    deopt 174 [i9, r87, asgn3, ndrop];
  D52():
    deopt 186 [i11, r101];
  D72():
    deopt 272 [chisq];
  D75():
    deopt 279 [test7];
  L198():
    ndrop1 = force? ndrop;
    checkMissing(ndrop1);
    c16 = `is.object`(ndrop1);
    if c16 then L199() else L200(i9, r87, asgn3, ndrop1);
  L204():
    st jj = r101;
    glm_fit = ldf `glm.fit`;
    check L205() else D53();
  L261(dx53):
    dfs = ld dfs;
    check L265() else D70();
  L262():
    dr40 = tryDispatchBuiltin.1("$", object42);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L264() else L263(dr40);
  L263(object44):
    r140 = `$`(object44, <sym rank>);
    goto L261(r140);
  L269():
    chisq1 = force? chisq;
    checkMissing(chisq1);
    dev = ld dev;
    check L270() else D73();
  L272():
    test8 = force? test7;
    checkMissing(test8);
    r145 = `==`(test8, "Rao");
    c35 = `as.logical`(r145);
    if c35 then L273() else L39();
  D53():
    deopt 189 [i11];
  D70():
    deopt 265 [dfs];
  D73():
    deopt 274 [dev];
  L29(i15, r91, asgn7, dx13):
    r93 = `==`(asgn7, dx13);
    __1 = ldf `[` in base;
    r94 = dyn __1(r91, r93);
    goto L28(i15, r94);
  L39():
    goto L41();
  L41():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L279() else L280();
  L199():
    dr12 = tryDispatchBuiltin.1("[", ndrop1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L201() else L200(i9, r87, asgn3, dr12);
  L200(i13, r89, asgn5, ndrop3):
    i16 = ld i;
    check L202() else D50();
  L205():
    p20 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c17 = `is.object`(x8);
      if c17 then L1() else L2();
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", x8);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      jj = ld jj;
      jj1 = force? jj;
      __2 = ldf `[` in base;
      r102 = dyn __2(x8, <missing>, jj1, FALSE);
      goto L0(r102);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p21 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p22 = prom<V +>{
      wt = ld wt;
      wt1 = force? wt;
      checkMissing(wt1);
      return wt1;
    };
    p23 = prom<V +>{
      object29 = ld object;
      object30 = force? object29;
      checkMissing(object30);
      c18 = `is.object`(object30);
      if c18 then L1() else L2(object30);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", object30);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(object32):
      r106 = `$`(object32, <sym offset>);
      goto L0(r106);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p24 = prom<V +>{
      object33 = ld object;
      object34 = force? object33;
      checkMissing(object34);
      c19 = `is.object`(object34);
      if c19 then L1() else L2(object34);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", object34);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(object36):
      r108 = `$`(object36, <sym family>);
      goto L0(r108);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p25 = prom<V +>{
      object37 = ld object;
      object38 = force? object37;
      checkMissing(object38);
      c20 = `is.object`(object38);
      if c20 then L1() else L2(object38);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("$", object38);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(object40):
      r110 = `$`(object40, <sym control>);
      goto L0(r110);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r112 = dyn glm_fit[, , , offset, family, control](p20, p21, p22, p23, p24, p25);
    check L206() else D54();
  L264():
    dx52 = getTryDispatchBuiltinValue(dr40);
    goto L261(dx52);
  L265():
    dfs1 = force? dfs;
    checkMissing(dfs1);
    c33 = ldf c in base;
    r141 = dyn c33(dx53, dfs1);
    check L266() else D71();
  L270():
    dev1 = force? dev;
    checkMissing(dev1);
    c34 = ldf c in base;
    r144 = dyn c34(chisq1, dev1);
    check L271() else D74();
  L273():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L274() else L275();
  D50():
    deopt 176 [i13, r89, asgn5, ndrop3, i16];
  D54():
    deopt 199 [i11, r112];
  D71():
    deopt 268 [r141];
  D74():
    deopt 277 [r144];
  L40(r147):
    st score = r147;
    goto L41();
  L42(r151):
    c38 = `as.logical`(r151);
    if c38 then L43(c38) else L282();
  L201():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L29(i9, r87, asgn3, dx12);
  L202():
    i17 = force? i16;
    __ = ldf `[` in base;
    r92 = dyn __(ndrop3, i17);
    goto L29(i13, r89, asgn5, r92);
  L206():
    st z = r112;
    z = ld z;
    check L207() else D55();
  L266():
    goto L37(r141);
  L271():
    goto L38(r144);
  L274():
    score = ld score;
    check L276() else D76();
  L275():
    r146 = dyn base17(NA_LGL, <sym score>);
    goto L40(r146);
  L279():
    scale1 = ld scale;
    check L281() else D78();
  L280():
    r150 = dyn base18(<sym scale>);
    goto L42(r150);
  D55():
    deopt 201 [i11, z];
  D76():
    deopt 286 [score];
  D78():
    deopt 294 [scale1];
  L43(c39):
    c44 = `as.logical`(c39);
    if c44 then L285() else L44();
  L207():
    z1 = force? z;
    checkMissing(z1);
    c21 = `is.object`(z1);
    if c21 then L209() else L210(i11, z1);
  L276():
    score1 = force? score;
    checkMissing(score1);
    c36 = ldf c in base;
    r148 = dyn c36(NA_LGL, score1);
    check L277() else D77();
  L281():
    scale2 = force? scale1;
    checkMissing(scale2);
    c37 = `==`(scale2, NULL);
    goto L42(c37);
  L282():
    scale3 = ld scale;
    check L283() else D79();
  D77():
    deopt 289 [r148];
  D79():
    deopt 297 [c38, scale3];
  L44():
    scale5 = ld scale;
    check L293() else D82();
  L45(dx56):
    st dispersion = dx56;
    object47 = ld object;
    check L294() else D83();
  L208(i21, dx23):
    l2 = ld dfs;
    c22 = `is.object`(l2);
    if c22 then L212() else L213(i21, dx23, l2);
  L209():
    dr22 = tryDispatchBuiltin.1("$", z1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L211() else L210(i11, dr22);
  L210(i19, z3):
    r113 = `$`(z3, <sym rank>);
    goto L208(i19, r113);
  L277():
    goto L40(r148);
  L283():
    scale4 = force? scale3;
    checkMissing(scale4);
    r152 = `==`(scale4, 0.0);
    c41 = `as.logical`(r152);
    c42 = `||`(c38, c41);
    goto L43(c42);
  L285():
    summary = ldf summary;
    check L286() else D80();
  D80():
    deopt 303 [];
  D82():
    deopt 309 [scale5];
  D83():
    deopt 312 [object47];
  L30(i25, dx29):
    st dfs = dx29;
    z4 = ld z;
    check L216() else D57();
  L211():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L208(i11, dx22);
  L212():
    dr24 = tryDispatchBuiltin.0("[<-", l2, dx23);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L214() else L213(i21, dx23, dr24);
  L213(i23, dx25, l4):
    i26 = ld i;
    check L215() else D56();
  L286():
    p29 = prom<V +>{
      object45 = ld object;
      object46 = force? object45;
      checkMissing(object46);
      return object46;
    };
    r154 = dyn summary[, dispersion](p29, NULL);
    check L287() else D81();
  L293():
    scale6 = force? scale5;
    checkMissing(scale6);
    goto L45(scale6);
  L294():
    object48 = force? object47;
    checkMissing(object48);
    c46 = `is.object`(object48);
    if c46 then L296() else L297(object48);
  D56():
    deopt 205 [i23, dx25, l4, dx23, i26];
  D57():
    deopt 209 [i25, z4];
  D81():
    deopt 307 [r154];
  L214():
    dx27 = getTryDispatchBuiltinValue(dr24);
    goto L30(i21, dx27);
  L215():
    i27 = force? i26;
    ___ = ldf `[<-` in base;
    r114 = dyn ___(l4, dx23, i27);
    goto L30(i23, r114);
  L216():
    z5 = force? z4;
    checkMissing(z5);
    c23 = `is.object`(z5);
    if c23 then L218() else L219(i25, z5);
  L287():
    c45 = `is.object`(r154);
    if c45 then L289() else L290(r154);
  L295(dx58):
    c47 = `is.object`(dx58);
    if c47 then L300() else L301(dx58);
  L296():
    dr44 = tryDispatchBuiltin.1("$", object48);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L298() else L297(dr44);
  L297(object50):
    r158 = `$`(object50, <sym family>);
    goto L295(r158);
  L217(i31, dx31):
    l5 = ld dev;
    c24 = `is.object`(l5);
    if c24 then L221() else L222(i31, dx31, l5);
  L218():
    dr26 = tryDispatchBuiltin.1("$", z5);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L220() else L219(i25, dr26);
  L219(i29, z7):
    r115 = `$`(z7, <sym deviance>);
    goto L217(i29, r115);
  L288(dx55):
    goto L45(dx55);
  L289():
    dr42 = tryDispatchBuiltin.1("$", r154);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L291() else L290(dr42);
  L290(r156):
    r157 = `$`(r156, <sym dispersion>);
    goto L288(r157);
  L298():
    dx57 = getTryDispatchBuiltinValue(dr44);
    goto L295(dx57);
  L299(dx62):
    st fam = dx62;
    fam = ld fam;
    check L303() else D84();
  L300():
    dr46 = tryDispatchBuiltin.1("$", dx58);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L302() else L301(dr46);
  L301(dx60):
    r159 = `$`(dx60, <sym family>);
    goto L299(r159);
  D84():
    deopt 317 [fam];
  L31(i35, dx37):
    st dev = dx37;
    test5 = ld test;
    check L225() else D59();
  L220():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L217(i25, dx30);
  L221():
    dr28 = tryDispatchBuiltin.0("[<-", l5, dx31);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L223() else L222(i31, dx31, dr28);
  L222(i33, dx33, l7):
    i36 = ld i;
    check L224() else D58();
  L291():
    dx54 = getTryDispatchBuiltinValue(dr42);
    goto L288(dx54);
  L302():
    dx61 = getTryDispatchBuiltinValue(dr46);
    goto L299(dx61);
  L303():
    fam1 = force? fam;
    checkMissing(fam1);
    r160 = `==`(fam1, "gaussian");
    c48 = `as.logical`(r160);
    if c48 then L304() else L46();
  D58():
    deopt 213 [i33, dx33, l7, dx31, i36];
  D59():
    deopt 217 [i35, test5];
  L46():
    dev6 = ld dev;
    check L317() else D92();
  L50(r170):
    st loglik = r170;
    loglik = ld loglik;
    check L319() else D94();
  L223():
    dx35 = getTryDispatchBuiltinValue(dr28);
    goto L31(i31, dx35);
  L224():
    i37 = force? i36;
    ___1 = ldf `[<-` in base;
    r116 = dyn ___1(l7, dx31, i37);
    goto L31(i33, r116);
  L225():
    test6 = force? test5;
    checkMissing(test6);
    r117 = `==`(test6, "Rao");
    c25 = `as.logical`(r117);
    if c25 then L226() else L32();
  L304():
    scale7 = ld scale;
    check L305() else D85();
  D85():
    deopt 321 [scale7];
  D92():
    deopt 339 [dev6];
  D94():
    deopt 344 [loglik];
  L32():
    goto L34(i35);
  L34(i62):
    goto L26(i62);
  L226():
    z8 = ld z;
    check L227() else D60();
  L305():
    scale8 = force? scale7;
    checkMissing(scale8);
    r161 = `>`(scale8, 0.0);
    c49 = `as.logical`(r161);
    if c49 then L306() else L47();
  L317():
    dev7 = force? dev6;
    checkMissing(dev7);
    dispersion = ld dispersion;
    check L318() else D93();
  L319():
    loglik1 = force? loglik;
    checkMissing(loglik1);
    k1 = ld k;
    check L320() else D95();
  D60():
    deopt 221 [i35, z8];
  D93():
    deopt 340 [dev7, dispersion];
  D95():
    deopt 345 [loglik1, k1];
  L47():
    n4 = ld n;
    check L311() else D89();
  L48(r164):
    goto L50(r164);
  L227():
    z9 = force? z8;
    checkMissing(z9);
    c26 = `is.object`(z9);
    if c26 then L229() else L230(i35, z9);
  L306():
    dev2 = ld dev;
    check L307() else D86();
  L318():
    dispersion1 = force? dispersion;
    checkMissing(dispersion1);
    r171 = `/`(dev7, dispersion1);
    goto L50(r171);
  L320():
    k2 = force? k1;
    checkMissing(k2);
    dfs2 = ld dfs;
    check L321() else D96();
  D86():
    deopt 325 [dev2];
  D89():
    deopt 331 [n4];
  D96():
    deopt 346 [loglik1, k2, dfs2];
  L228(i43, dx39):
    st r = dx39;
    z12 = ld z;
    check L232() else D61();
  L229():
    dr30 = tryDispatchBuiltin.1("$", z9);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L231() else L230(i35, dr30);
  L230(i41, z11):
    r118 = `$`(z11, <sym residuals>);
    goto L228(i41, r118);
  L307():
    dev3 = force? dev2;
    checkMissing(dev3);
    scale9 = ld scale;
    check L308() else D87();
  L311():
    n5 = force? n4;
    checkMissing(n5);
    sym19 = ldf log;
    base19 = ldf log in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L312() else L313();
  L321():
    dfs3 = force? dfs2;
    checkMissing(dfs3);
    r172 = `*`(k2, dfs3);
    r173 = `+`(loglik1, r172);
    st aic = r173;
    dfs4 = ld dfs;
    check L322() else D97();
  D61():
    deopt 225 [i43, z12];
  D87():
    deopt 326 [dev3, scale9];
  D97():
    deopt 351 [dfs4];
  L49(n8, r166):
    r169 = `*`(n8, r166);
    goto L48(r169);
  L231():
    dx38 = getTryDispatchBuiltinValue(dr30);
    goto L228(i35, dx38);
  L232():
    z13 = force? z12;
    checkMissing(z13);
    c27 = `is.object`(z13);
    if c27 then L234() else L235(i43, z13);
  L308():
    scale10 = force? scale9;
    checkMissing(scale10);
    r162 = `/`(dev3, scale10);
    n2 = ld n;
    check L309() else D88();
  L312():
    dev4 = ld dev;
    check L314() else D90();
  L313():
    r165 = dyn base19(<lang `/`(dev, n)>);
    goto L49(n5, r165);
  L322():
    dfs5 = force? dfs4;
    checkMissing(dfs5);
    c50 = `is.object`(dfs5);
    if c50 then L323() else L324(dfs5);
  D88():
    deopt 328 [r162, n2];
  D90():
    deopt 333 [n5, dev4];
  L51(dx64):
    dfs8 = ld dfs;
    check L326() else D98();
  L233(i47, dx41):
    st w = dx41;
    glm_fit1 = ldf `glm.fit`;
    check L237() else D62();
  L234():
    dr32 = tryDispatchBuiltin.1("$", z13);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L236() else L235(i43, dr32);
  L235(i45, z15):
    r119 = `$`(z15, <sym weights>);
    goto L233(i45, r119);
  L309():
    n3 = force? n2;
    checkMissing(n3);
    r163 = `-`(r162, n3);
    goto L48(r163);
  L314():
    dev5 = force? dev4;
    checkMissing(dev5);
    n9 = ld n;
    check L315() else D91();
  L323():
    dr48 = tryDispatchBuiltin.1("[", dfs5);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L325() else L324(dr48);
  L324(dfs7):
    __3 = ldf `[` in base;
    r174 = dyn __3(dfs7, 1);
    goto L51(r174);
  D62():
    deopt 230 [i47];
  D91():
    deopt 334 [n5, dev5, n9];
  D98():
    deopt 355 [dx64, dfs8];
  L236():
    dx40 = getTryDispatchBuiltinValue(dr32);
    goto L233(i43, dx40);
  L237():
    p26 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p27 = prom<V +>{
      r121 = ld r;
      r122 = force? r121;
      checkMissing(r122);
      return r122;
    };
    p28 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    r125 = dyn glm_fit1(p26, p27, p28);
    check L238() else D63();
  L315():
    n10 = force? n9;
    checkMissing(n10);
    r167 = `/`(dev5, n10);
    r168 = log(r167, 2.718281828459045);
    goto L49(n5, r168);
  L325():
    dx63 = getTryDispatchBuiltinValue(dr48);
    goto L51(dx63);
  L326():
    dfs9 = force? dfs8;
    checkMissing(dfs9);
    r175 = `-`(dx64, dfs9);
    st dfs = r175;
    l11 = ld dfs;
    c51 = `is.object`(l11);
    if c51 then L327() else L328(NA_LGL, l11);
  D63():
    deopt 234 [i47, r125];
  L52(dx66):
    st dfs = dx66;
    aic = ld aic;
    check L330() else D99();
  L238():
    st zz = r125;
    zz = ld zz;
    check L239() else D64();
  L327():
    dr50 = tryDispatchBuiltin.0("[<-", l11, NA_LGL);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L329() else L328(NA_LGL, dr50);
  L328(r177, l13):
    ___3 = ldf `[<-` in base;
    r180 = dyn ___3(l13, NA_LGL, 1);
    goto L52(r180);
  D64():
    deopt 236 [i47, zz];
  D99():
    deopt 366 [aic];
  L239():
    zz1 = force? zz;
    checkMissing(zz1);
    c28 = `is.object`(zz1);
    if c28 then L241() else L242(i47, zz1);
  L329():
    dx65 = getTryDispatchBuiltinValue(dr50);
    goto L52(dx65);
  L330():
    aic1 = force? aic;
    checkMissing(aic1);
    extractAIC = ldf extractAIC;
    check L331() else D100();
  D100():
    deopt 368 [aic1];
  L240(i51, dx43):
    zz4 = ld zz;
    check L244() else D65();
  L241():
    dr34 = tryDispatchBuiltin.1("$", zz1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L243() else L242(i47, dr34);
  L242(i49, zz3):
    r126 = `$`(zz3, <sym null.deviance>);
    goto L240(i49, r126);
  L331():
    p30 = prom<V +>{
      object51 = ld object;
      object52 = force? object51;
      checkMissing(object52);
      return object52;
    };
    p31 = prom<V +>{
      k3 = ld k;
      k4 = force? k3;
      checkMissing(k4);
      return k4;
    };
    r183 = dyn extractAIC[, k](p30, p31);
    check L332() else D101();
  D65():
    deopt 238 [i51, dx43, zz4];
  D101():
    deopt 372 [aic1, r183];
  L243():
    dx42 = getTryDispatchBuiltinValue(dr34);
    goto L240(i47, dx42);
  L244():
    zz5 = force? zz4;
    checkMissing(zz5);
    c29 = `is.object`(zz5);
    if c29 then L246() else L247(i51, dx43, zz5);
  L332():
    c52 = `is.object`(r183);
    if c52 then L333() else L334(aic1, r183);
  L53(aic5, dx68):
    aic6 = ld aic;
    check L336() else D102();
  L245(i55, dx48, dx49):
    r128 = `-`(dx48, dx49);
    l8 = ld score;
    c30 = `is.object`(l8);
    if c30 then L249() else L250(i55, r128, l8);
  L246():
    dr36 = tryDispatchBuiltin.1("$", zz5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L248() else L247(i51, dx43, dr36);
  L247(i53, dx45, zz7):
    r127 = `$`(zz7, <sym deviance>);
    goto L245(i53, dx45, r127);
  L333():
    dr52 = tryDispatchBuiltin.1("[", r183);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L335() else L334(aic1, dr52);
  L334(aic3, r185):
    __4 = ldf `[` in base;
    r186 = dyn __4(r185, 2);
    goto L53(aic3, r186);
  D102():
    deopt 375 [aic5, dx68, aic6];
  L33(i59, r132, dx51):
    st score = dx51;
    goto L34(i59);
  L248():
    dx47 = getTryDispatchBuiltinValue(dr36);
    goto L245(i51, dx43, dx47);
  L249():
    dr38 = tryDispatchBuiltin.0("[<-", l8, r128);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L251() else L250(i55, r128, dr38);
  L250(i57, r130, l10):
    i60 = ld i;
    check L252() else D66();
  L335():
    dx67 = getTryDispatchBuiltinValue(dr52);
    goto L53(aic1, dx67);
  L336():
    aic7 = force? aic6;
    checkMissing(aic7);
    c53 = `is.object`(aic7);
    if c53 then L337() else L338(aic5, dx68, aic7);
  D66():
    deopt 243 [i57, r130, l10, r128, i60];
  L54(aic13, dx73, dx74):
    r188 = `-`(dx73, dx74);
    r189 = `+`(aic13, r188);
    st aic = r189;
    data_frame = ldf `data.frame`;
    check L340() else D103();
  L251():
    dx50 = getTryDispatchBuiltinValue(dr38);
    goto L33(i55, r128, dx50);
  L252():
    i61 = force? i60;
    ___2 = ldf `[<-` in base;
    r133 = dyn ___2(l10, r128, i61);
    goto L33(i57, r130, r133);
  L337():
    dr54 = tryDispatchBuiltin.1("[", aic7);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L339() else L338(aic5, dx68, dr54);
  L338(aic10, dx70, aic11):
    __5 = ldf `[` in base;
    r187 = dyn __5(aic11, 1);
    goto L54(aic10, dx70, r187);
  D103():
    deopt 384 [];
  L339():
    dx72 = getTryDispatchBuiltinValue(dr54);
    goto L54(aic5, dx68, dx72);
  L340():
    p32 = prom<V +>{
      dfs10 = ld dfs;
      dfs11 = force? dfs10;
      checkMissing(dfs11);
      return dfs11;
    };
    p33 = prom<V +>{
      dev8 = ld dev;
      dev9 = force? dev8;
      checkMissing(dev9);
      return dev9;
    };
    p34 = prom<V +>{
      aic14 = ld aic;
      aic15 = force? aic14;
      checkMissing(aic15);
      return aic15;
    };
    p35 = prom<V +>{
      scope13 = ld scope;
      scope14 = force? scope13;
      checkMissing(scope14);
      return scope14;
    };
    r194 = dyn data_frame[Df, Deviance, AIC, `row.names`, `check.names`](p32, p33, p34, p35, FALSE);
    check L341() else D104();
  D104():
    deopt 395 [r194];
  L341():
    st aod = r194;
    sym20 = ldf all;
    base20 = ldf all in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L342() else L343();
  L55(r196):
    c54 = `as.logical`(r196);
    if c54 then L349() else L57();
  L342():
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L344() else L345();
  L343():
    r195 = dyn base20(<lang is.na(aic)>);
    goto L55(r195);
  L56(r198):
    all1 = ldf all in base;
    r200 = dyn all1(r198);
    check L348() else D107();
  L57():
    goto L59();
  L59():
    test9 = ld test;
    check L355() else D109();
  L344():
    aic16 = ld aic;
    check L346() else D105();
  L345():
    r197 = dyn base21(<sym aic>);
    goto L56(r197);
  L349():
    aod = ld aod;
    check L350() else D108();
  D105():
    deopt 401 [aic16];
  D107():
    deopt 406 [r200];
  D108():
    deopt 407 [aod];
  D109():
    deopt 417 [test9];
  L346():
    aic17 = force? aic16;
    checkMissing(aic17);
    is_na = ldf `is.na` in base;
    r199 = dyn is_na(aic17);
    check L347() else D106();
  L348():
    goto L55(r200);
  L350():
    aod1 = force? aod;
    checkMissing(aod1);
    c55 = `is.object`(aod1);
    if c55 then L351() else L352();
  L355():
    test10 = force? test9;
    checkMissing(test10);
    r202 = `==`(test10, "LRT");
    c56 = `as.logical`(r202);
    if c56 then L356() else L60();
  D106():
    deopt 404 [r199];
  L58(dx76):
    st aod = dx76;
    goto L59();
  L60():
    test11 = ld test;
    check L385() else D121();
  L68():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L476() else L477();
  L347():
    goto L56(r199);
  L351():
    dr56 = tryDispatchBuiltin.1("[", aod1);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L353() else L352();
  L352():
    __6 = ldf `[` in base;
    r201 = dyn __6(aod1, <missing>, -3.0);
    goto L58(r201);
  L356():
    pmax = ldf pmax;
    check L357() else D110();
  D110():
    deopt 422 [];
  D121():
    deopt 480 [test11];
  L87(r312):
    st head = r312;
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L491() else L492();
  L353():
    dx75 = getTryDispatchBuiltinValue(dr56);
    goto L58(dx75);
  L357():
    p36 = prom<V +>{
      loglik2 = ld loglik;
      loglik3 = force? loglik2;
      checkMissing(loglik3);
      loglik4 = ld loglik;
      loglik5 = force? loglik4;
      checkMissing(loglik5);
      c57 = `is.object`(loglik5);
      if c57 then L1() else L2(loglik3, loglik5);
    L0(loglik11, dx79):
      r204 = `-`(loglik11, dx79);
      return r204;
    L1():
      dr58 = tryDispatchBuiltin.1("[", loglik5);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(loglik3, dr58);
    L2(loglik8, loglik9):
      __7 = ldf `[` in base;
      r203 = dyn __7(loglik9, 1);
      goto L0(loglik8, r203);
    L3():
      dx78 = getTryDispatchBuiltinValue(dr58);
      goto L0(loglik3, dx78);
    };
    r206 = dyn pmax(0.0, p36);
    check L358() else D111();
  L385():
    test12 = force? test11;
    checkMissing(test12);
    r231 = `==`(test12, "Rao");
    c66 = `as.logical`(r231);
    if c66 then L386() else L69();
  L476():
    deparse = ldf deparse;
    check L478() else D161();
  L477():
    r311 = dyn base27("Single term deletions", "\nModel:", <lang deparse(formula(object))>, <lang if(`&&`(`!`(is.null(scale)), `>`(scale, 0.0)), paste("\nscale: ", format(scale), "\n"))>);
    goto L87(r311);
  D111():
    deopt 425 [r206];
  D161():
    deopt 654 [];
  L69():
    test13 = ld test;
    check L414() else D135();
  L92(r328):
    l47 = ld aod;
    class__ = ldf `class<-`;
    check L494() else D169();
  L358():
    st dev = r206;
    l14 = ld dev;
    c58 = `is.object`(l14);
    if c58 then L359() else L360(NA_LGL, l14);
  L386():
    pmax1 = ldf pmax;
    check L387() else D122();
  L478():
    p49 = prom<V +>{
      formula = ldf formula;
      p48 = prom<V +>{
        object57 = ld object;
        object58 = force? object57;
        checkMissing(object58);
        return object58;
      };
      r314 = dyn formula(p48);
      return r314;
    };
    r316 = dyn deparse(p49);
    check L479() else D162();
  L491():
    c102 = ldf c in base;
    r329 = dyn c102("anova", "data.frame");
    check L493() else D168();
  L492():
    r327 = dyn base29("anova", "data.frame");
    goto L92(r327);
  D122():
    deopt 485 [];
  D135():
    deopt 541 [test13];
  D162():
    deopt 656 [r316];
  D168():
    deopt 683 [r329];
  D169():
    deopt 685 [r328, l47, r328];
  L61(dx81):
    st dev = dx81;
    sym22 = ldf `is.na`;
    base22 = ldf `is.na` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L362() else L363();
  L359():
    dr60 = tryDispatchBuiltin.0("[<-", l14, NA_LGL);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L361() else L360(NA_LGL, dr60);
  L360(r208, l16):
    ___4 = ldf `[<-` in base;
    r211 = dyn ___4(l16, NA_LGL, 1);
    goto L61(r211);
  L387():
    p39 = prom<V +>{
      score2 = ld score;
      score3 = force? score2;
      checkMissing(score3);
      return score3;
    };
    r233 = dyn pmax1(0.0, p39);
    check L388() else D123();
  L414():
    test14 = force? test13;
    checkMissing(test14);
    r254 = `==`(test14, "F");
    c74 = `as.logical`(r254);
    if c74 then L415() else L76();
  L479():
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L480() else L481();
  L493():
    goto L92(r329);
  L494():
    r330 = dyn class__(l47, NULL, r328);
    check L495() else D170();
  D123():
    deopt 488 [r233];
  D170():
    deopt 687 [r328, r330];
  L62(r213):
    r215 = `!`(r213);
    st nas = r215;
    dispersion2 = ld dispersion;
    check L366() else D114();
  L76():
    goto L68();
  L88(r318):
    r319 = `!`(r318);
    c94 = `as.logical`(r319);
    if c94 then L483() else L89(c94);
  L361():
    dx80 = getTryDispatchBuiltinValue(dr60);
    goto L61(dx80);
  L362():
    dev10 = ld dev;
    check L364() else D112();
  L363():
    r212 = dyn base22(<sym dev>);
    goto L62(r212);
  L388():
    st dev = r233;
    sym23 = ldf `is.na`;
    base23 = ldf `is.na` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L389() else L390();
  L415():
    fam2 = ld fam;
    check L416() else D136();
  L480():
    scale11 = ld scale;
    check L482() else D163();
  L481():
    r317 = dyn base28(<sym scale>);
    goto L88(r317);
  L495():
    st aod = r330;
    head = ld head;
    check L496() else D171();
  D112():
    deopt 436 [dev10];
  D114():
    deopt 442 [dispersion2];
  D136():
    deopt 545 [fam2];
  D163():
    deopt 658 [scale11];
  D171():
    deopt 689 [head];
  L70(r235):
    r237 = `!`(r235);
    st nas = r237;
    dispersion4 = ld dispersion;
    check L393() else D126();
  L89(c96):
    c100 = `as.logical`(c96);
    if c100 then L486() else L90();
  L364():
    dev11 = force? dev10;
    checkMissing(dev11);
    is_na1 = ldf `is.na` in base;
    r214 = dyn is_na1(dev11);
    check L365() else D113();
  L366():
    dispersion3 = force? dispersion2;
    checkMissing(dispersion3);
    r216 = `==`(dispersion3, 1.0);
    c59 = `as.logical`(r216);
    if c59 then L367() else L63();
  L389():
    dev29 = ld dev;
    check L391() else D124();
  L390():
    r234 = dyn base23(<sym dev>);
    goto L70(r234);
  L416():
    fam3 = force? fam2;
    checkMissing(fam3);
    r255 = `==`(fam3, "binomial");
    c75 = `as.logical`(r255);
    if c75 then L77(c75) else L417();
  L482():
    scale12 = force? scale11;
    checkMissing(scale12);
    c93 = `==`(scale12, NULL);
    goto L88(c93);
  L483():
    scale13 = ld scale;
    check L484() else D164();
  L496():
    head1 = force? head;
    checkMissing(head1);
    l48 = ld aod;
    attr__ = ldf `attr<-`;
    check L497() else D172();
  D113():
    deopt 439 [r214];
  D124():
    deopt 492 [dev29];
  D126():
    deopt 498 [dispersion4];
  D164():
    deopt 662 [c94, scale13];
  D172():
    deopt 692 [head1, l48, head1];
  L63():
    goto L64("scaled dev.");
  L64(r217):
    st LRT = r217;
    dev12 = ld dev;
    check L369() else D115();
  L77(c76):
    c81 = `as.logical`(c76);
    if c81 then L420() else L78();
  L90():
    goto L91(NULL);
  L91(r325):
    c101 = ldf c in base;
    r326 = dyn c101("Single term deletions", "\nModel:", r316, r325);
    check L490() else D167();
  L365():
    goto L62(r214);
  L367():
    goto L64("LRT");
  L391():
    dev30 = force? dev29;
    checkMissing(dev30);
    is_na2 = ldf `is.na` in base;
    r236 = dyn is_na2(dev30);
    check L392() else D125();
  L393():
    dispersion5 = force? dispersion4;
    checkMissing(dispersion5);
    r238 = `==`(dispersion5, 1.0);
    c67 = `as.logical`(r238);
    if c67 then L394() else L71();
  L417():
    fam4 = ld fam;
    check L418() else D137();
  L484():
    scale14 = force? scale13;
    checkMissing(scale14);
    r320 = `>`(scale14, 0.0);
    c97 = `as.logical`(r320);
    c98 = `&&`(c94, c97);
    goto L89(c98);
  L486():
    paste = ldf paste;
    check L487() else D165();
  L497():
    r331 = dyn attr__(l48, NULL, "heading", head1);
    check L498() else D173();
  D115():
    deopt 451 [dev12];
  D125():
    deopt 495 [r236];
  D137():
    deopt 549 [c75, fam4];
  D165():
    deopt 668 [];
  D167():
    deopt 676 [r326];
  D173():
    deopt 695 [head1, r331];
  L71():
    goto L72("scaled Rao sc.");
  L72(r239):
    st SC = r239;
    dev31 = ld dev;
    check L396() else D127();
  L78():
    goto L79();
  L79():
    aod12 = ld aod;
    check L424() else D140();
  L369():
    dev13 = force? dev12;
    checkMissing(dev13);
    l17 = ld aod;
    c60 = `is.object`(l17);
    if c60 then L370() else L371(dev13, l17);
  L392():
    goto L70(r236);
  L394():
    goto L72("Rao score");
  L418():
    fam5 = force? fam4;
    checkMissing(fam5);
    r256 = `==`(fam5, "poisson");
    c78 = `as.logical`(r256);
    c79 = `||`(c75, c78);
    goto L77(c79);
  L420():
    warning = ldf warning;
    check L421() else D138();
  L487():
    p51 = prom<V +>{
      format = ldf format;
      p50 = prom<V +>{
        scale15 = ld scale;
        scale16 = force? scale15;
        checkMissing(scale16);
        return scale16;
      };
      r322 = dyn format(p50);
      return r322;
    };
    r324 = dyn paste("\nscale: ", p51, "\n");
    check L488() else D166();
  L490():
    goto L87(r326);
  L498():
    st aod = r331;
    aod20 = ld aod;
    check L499() else D174();
  D127():
    deopt 507 [dev31];
  D138():
    deopt 555 [];
  D140():
    deopt 562 [aod12];
  D166():
    deopt 672 [r324];
  D174():
    deopt 697 [aod20];
  L65(dx83):
    st aod = dx83;
    safe_pchisq = ldf safe_pchisq;
    check L374() else D117();
  L370():
    dr62 = tryDispatchBuiltin.0("[<-", l17, dev13);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L372() else L371(dev13, dr62);
  L371(dev15, l19):
    LRT = ld LRT;
    check L373() else D116();
  L396():
    dev32 = force? dev31;
    checkMissing(dev32);
    dispersion6 = ld dispersion;
    check L397() else D128();
  L421():
    p43 = prom<V +>{
      gettextf = ldf gettextf;
      p42 = prom<V +>{
        fam6 = ld fam;
        fam7 = force? fam6;
        checkMissing(fam7);
        return fam7;
      };
      r258 = dyn gettextf("F test assumes 'quasi%s' family", p42);
      return r258;
    };
    r260 = dyn warning[, domain](p43, NA_LGL);
    check L422() else D139();
  L424():
    aod13 = force? aod12;
    checkMissing(aod13);
    c82 = `is.object`(aod13);
    if c82 then L426() else L427(aod13);
  L488():
    goto L91(r324);
  L499():
    aod21 = force? aod20;
    checkMissing(aod21);
    popenv;
    return aod21;
  D116():
    deopt 455 [dev15, l19, dev13, LRT];
  D117():
    deopt 461 [];
  D128():
    deopt 508 [dev32, dispersion6];
  D139():
    deopt 559 [r260];
  L372():
    dx82 = getTryDispatchBuiltinValue(dr62);
    goto L65(dx82);
  L373():
    LRT1 = force? LRT;
    ___5 = ldf `[<-` in base;
    r218 = dyn ___5(l17, <missing>, LRT1, dev13);
    goto L65(r218);
  L374():
    p37 = prom<V +>{
      dev18 = ld dev;
      dev19 = force? dev18;
      checkMissing(dev19);
      c61 = `is.object`(dev19);
      if c61 then L1() else L2(dev19);
    L0(dx85):
      return dx85;
    L1():
      dr64 = tryDispatchBuiltin.1("[", dev19);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(dev21):
      nas = ld nas;
      nas1 = force? nas;
      __8 = ldf `[` in base;
      r219 = dyn __8(dev21, nas1);
      goto L0(r219);
    L3():
      dx84 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx84);
    };
    p38 = prom<V +>{
      aod4 = ld aod;
      aod5 = force? aod4;
      checkMissing(aod5);
      c62 = `is.object`(aod5);
      if c62 then L2() else L3(aod5);
    L1(dx87):
      c63 = `is.object`(dx87);
      if c63 then L5() else L6(dx87);
    L2():
      dr66 = tryDispatchBuiltin.1("$", aod5);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L4() else L3(dr66);
    L3(aod7):
      r221 = `$`(aod7, <sym Df>);
      goto L1(r221);
    L0(dx91):
      return dx91;
    L4():
      dx86 = getTryDispatchBuiltinValue(dr66);
      goto L1(dx86);
    L5():
      dr68 = tryDispatchBuiltin.1("[", dx87);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L7() else L6(dr68);
    L6(dx89):
      nas2 = ld nas;
      nas3 = force? nas2;
      __9 = ldf `[` in base;
      r222 = dyn __9(dx89, nas3);
      goto L0(r222);
    L7():
      dx90 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx90);
    };
    r224 = dyn safe_pchisq[, , `lower.tail`](p37, p38, FALSE);
    check L375() else D118();
  L397():
    dispersion7 = force? dispersion6;
    checkMissing(dispersion7);
    r240 = `/`(dev32, dispersion7);
    st dev = r240;
    dev33 = ld dev;
    check L398() else D129();
  L422():
    goto L79();
  L425(dx111):
    st dev = dx111;
    dev49 = ld dev;
    check L429() else D141();
  L426():
    dr86 = tryDispatchBuiltin.1("$", aod13);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L428() else L427(dr86);
  L427(aod15):
    r262 = `$`(aod15, <sym Deviance>);
    goto L425(r262);
  D118():
    deopt 466 [r224];
  D129():
    deopt 512 [dev33];
  D141():
    deopt 566 [dev49];
  L375():
    l20 = ld dev;
    c64 = `is.object`(l20);
    if c64 then L376() else L377(r224, l20);
  L398():
    dev34 = force? dev33;
    checkMissing(dev34);
    l26 = ld aod;
    c68 = `is.object`(l26);
    if c68 then L399() else L400(dev34, l26);
  L428():
    dx110 = getTryDispatchBuiltinValue(dr86);
    goto L425(dx110);
  L429():
    dev50 = force? dev49;
    checkMissing(dev50);
    c83 = `is.object`(dev50);
    if c83 then L430() else L431(dev50);
  L66(dx93):
    st dev = dx93;
    dev22 = ld dev;
    check L380() else D120();
  L73(dx97):
    st aod = dx97;
    safe_pchisq1 = ldf safe_pchisq;
    check L403() else D131();
  L80(dx113):
    rdf = ld rdf;
    check L433() else D142();
  L376():
    dr70 = tryDispatchBuiltin.0("[<-", l20, r224);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L378() else L377(r224, dr70);
  L377(r226, l22):
    nas4 = ld nas;
    check L379() else D119();
  L399():
    dr74 = tryDispatchBuiltin.0("[<-", l26, dev34);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L401() else L400(dev34, dr74);
  L400(dev36, l28):
    SC = ld SC;
    check L402() else D130();
  L430():
    dr88 = tryDispatchBuiltin.1("[", dev50);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L432() else L431(dr88);
  L431(dev52):
    __12 = ldf `[` in base;
    r263 = dyn __12(dev52, 1);
    goto L80(r263);
  D119():
    deopt 468 [r226, l22, r224, nas4];
  D120():
    deopt 472 [dev22];
  D130():
    deopt 516 [dev36, l28, dev34, SC];
  D131():
    deopt 522 [];
  D142():
    deopt 570 [dx113, rdf];
  L378():
    dx92 = getTryDispatchBuiltinValue(dr70);
    goto L66(dx92);
  L379():
    nas5 = force? nas4;
    ___6 = ldf `[<-` in base;
    r229 = dyn ___6(l22, r224, nas5);
    goto L66(r229);
  L380():
    dev23 = force? dev22;
    checkMissing(dev23);
    l23 = ld aod;
    c65 = `is.object`(l23);
    if c65 then L381() else L382(dev23);
  L401():
    dx96 = getTryDispatchBuiltinValue(dr74);
    goto L73(dx96);
  L402():
    SC1 = force? SC;
    ___8 = ldf `[<-` in base;
    r241 = dyn ___8(l26, <missing>, SC1, dev34);
    goto L73(r241);
  L403():
    p40 = prom<V +>{
      dev39 = ld dev;
      dev40 = force? dev39;
      checkMissing(dev40);
      c69 = `is.object`(dev40);
      if c69 then L1() else L2(dev40);
    L0(dx99):
      return dx99;
    L1():
      dr76 = tryDispatchBuiltin.1("[", dev40);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(dev42):
      nas6 = ld nas;
      nas7 = force? nas6;
      __10 = ldf `[` in base;
      r242 = dyn __10(dev42, nas7);
      goto L0(r242);
    L3():
      dx98 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx98);
    };
    p41 = prom<V +>{
      aod8 = ld aod;
      aod9 = force? aod8;
      checkMissing(aod9);
      c70 = `is.object`(aod9);
      if c70 then L2() else L3(aod9);
    L1(dx101):
      c71 = `is.object`(dx101);
      if c71 then L5() else L6(dx101);
    L2():
      dr78 = tryDispatchBuiltin.1("$", aod9);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L4() else L3(dr78);
    L3(aod11):
      r244 = `$`(aod11, <sym Df>);
      goto L1(r244);
    L0(dx105):
      return dx105;
    L4():
      dx100 = getTryDispatchBuiltinValue(dr78);
      goto L1(dx100);
    L5():
      dr80 = tryDispatchBuiltin.1("[", dx101);
      dc40 = getTryDispatchBuiltinDispatched(dr80);
      if dc40 then L7() else L6(dr80);
    L6(dx103):
      nas8 = ld nas;
      nas9 = force? nas8;
      __11 = ldf `[` in base;
      r245 = dyn __11(dx103, nas9);
      goto L0(r245);
    L7():
      dx104 = getTryDispatchBuiltinValue(dr80);
      goto L0(dx104);
    };
    r247 = dyn safe_pchisq1[, , `lower.tail`](p40, p41, FALSE);
    check L404() else D132();
  L432():
    dx112 = getTryDispatchBuiltinValue(dr88);
    goto L80(dx112);
  L433():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    r264 = `/`(dx113, rdf1);
    st rms = r264;
    pmax2 = ldf pmax;
    check L434() else D143();
  D132():
    deopt 527 [r247];
  D143():
    deopt 575 [];
  L67(dev27, dx95):
    st aod = dx95;
    goto L68();
  L381():
    dr72 = tryDispatchBuiltin.0("[<-", l23, dev23);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L383() else L382(dev23);
  L382(dev25):
    ___7 = ldf `[<-` in base;
    r230 = dyn ___7(l23, <missing>, "Pr(>Chi)", dev23);
    goto L67(dev25, r230);
  L404():
    l29 = ld dev;
    c72 = `is.object`(l29);
    if c72 then L405() else L406(r247, l29);
  L434():
    p44 = prom<V +>{
      dev53 = ld dev;
      dev54 = force? dev53;
      checkMissing(dev54);
      dev55 = ld dev;
      dev56 = force? dev55;
      checkMissing(dev56);
      c84 = `is.object`(dev56);
      if c84 then L1() else L2(dev54, dev56);
    L0(dev62, dx115):
      r266 = `-`(dev62, dx115);
      return r266;
    L1():
      dr90 = tryDispatchBuiltin.1("[", dev56);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L3() else L2(dev54, dr90);
    L2(dev59, dev60):
      __13 = ldf `[` in base;
      r265 = dyn __13(dev60, 1);
      goto L0(dev59, r265);
    L3():
      dx114 = getTryDispatchBuiltinValue(dr90);
      goto L0(dev54, dx114);
    };
    r268 = dyn pmax2(0.0, p44);
    check L435() else D144();
  D144():
    deopt 578 [r268];
  L74(dx107):
    st dev = dx107;
    dev43 = ld dev;
    check L409() else D134();
  L383():
    dx94 = getTryDispatchBuiltinValue(dr72);
    goto L67(dev23, dx94);
  L405():
    dr82 = tryDispatchBuiltin.0("[<-", l29, r247);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L407() else L406(r247, dr82);
  L406(r249, l31):
    nas10 = ld nas;
    check L408() else D133();
  L435():
    st dev = r268;
    aod16 = ld aod;
    check L436() else D145();
  D133():
    deopt 529 [r249, l31, r247, nas10];
  D134():
    deopt 533 [dev43];
  D145():
    deopt 580 [aod16];
  L407():
    dx106 = getTryDispatchBuiltinValue(dr82);
    goto L74(dx106);
  L408():
    nas11 = force? nas10;
    ___9 = ldf `[<-` in base;
    r252 = dyn ___9(l31, r247, nas11);
    goto L74(r252);
  L409():
    dev44 = force? dev43;
    checkMissing(dev44);
    l32 = ld aod;
    c73 = `is.object`(l32);
    if c73 then L410() else L411(dev44);
  L436():
    aod17 = force? aod16;
    checkMissing(aod17);
    c85 = `is.object`(aod17);
    if c85 then L438() else L439(aod17);
  L75(dev48, dx109):
    st aod = dx109;
    goto L68();
  L410():
    dr84 = tryDispatchBuiltin.0("[<-", l32, dev44);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L412() else L411(dev44);
  L411(dev46):
    ___10 = ldf `[<-` in base;
    r253 = dyn ___10(l32, <missing>, "Pr(>Chi)", dev44);
    goto L75(dev46, r253);
  L437(dx117):
    st dfs = dx117;
    object53 = ld object;
    check L441() else D146();
  L438():
    dr92 = tryDispatchBuiltin.1("$", aod17);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L440() else L439(dr92);
  L439(aod19):
    r269 = `$`(aod19, <sym Df>);
    goto L437(r269);
  D146():
    deopt 584 [object53];
  L412():
    dx108 = getTryDispatchBuiltinValue(dr84);
    goto L75(dev44, dx108);
  L440():
    dx116 = getTryDispatchBuiltinValue(dr92);
    goto L437(dx116);
  L441():
    object54 = force? object53;
    checkMissing(object54);
    c86 = `is.object`(object54);
    if c86 then L443() else L444(object54);
  L442(dx119):
    st rdf = dx119;
    dev63 = ld dev;
    check L446() else D147();
  L443():
    dr94 = tryDispatchBuiltin.1("$", object54);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L445() else L444(dr94);
  L444(object56):
    r270 = `$`(object56, <sym df.residual>);
    goto L442(r270);
  D147():
    deopt 588 [dev63];
  L445():
    dx118 = getTryDispatchBuiltinValue(dr94);
    goto L442(dx118);
  L446():
    dev64 = force? dev63;
    checkMissing(dev64);
    dfs12 = ld dfs;
    check L447() else D148();
  D148():
    deopt 589 [dev64, dfs12];
  L447():
    dfs13 = force? dfs12;
    checkMissing(dfs13);
    r271 = `/`(dev64, dfs13);
    rms = ld rms;
    check L448() else D149();
  D149():
    deopt 591 [r271, rms];
  L448():
    rms1 = force? rms;
    checkMissing(rms1);
    r272 = `/`(r271, rms1);
    st Fs = r272;
    l35 = ld Fs;
    c87 = `is.object`(l35);
    if c87 then L449() else L450(NA_LGL, l35);
  L81(dx121):
    st Fs = dx121;
    Fs = ld Fs;
    check L453() else D151();
  L449():
    dr96 = tryDispatchBuiltin.0("[<-", l35, NA_LGL);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L451() else L450(NA_LGL, dr96);
  L450(r274, l37):
    dfs14 = ld dfs;
    check L452() else D150();
  D150():
    deopt 598 [r274, l37, NA_LGL, dfs14];
  D151():
    deopt 604 [Fs];
  L451():
    dx120 = getTryDispatchBuiltinValue(dr96);
    goto L81(dx120);
  L452():
    dfs15 = force? dfs14;
    checkMissing(dfs15);
    r277 = `<`(dfs15, 1.0E-4);
    ___11 = ldf `[<-` in base;
    r278 = dyn ___11(l37, NA_LGL, r277);
    goto L81(r278);
  L453():
    Fs1 = force? Fs;
    checkMissing(Fs1);
    st P = Fs1;
    sym24 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L454() else L455();
  L82(r280):
    r282 = `!`(r280);
    st nas = r282;
    safe_pf = ldf safe_pf;
    check L458() else D154();
  L454():
    Fs2 = ld Fs;
    check L456() else D152();
  L455():
    r279 = dyn base24(<sym Fs>);
    goto L82(r279);
  D152():
    deopt 609 [Fs2];
  D154():
    deopt 616 [];
  L456():
    Fs3 = force? Fs2;
    checkMissing(Fs3);
    is_na3 = ldf `is.na` in base;
    r281 = dyn is_na3(Fs3);
    check L457() else D153();
  L458():
    p45 = prom<V +>{
      Fs4 = ld Fs;
      Fs5 = force? Fs4;
      checkMissing(Fs5);
      c88 = `is.object`(Fs5);
      if c88 then L1() else L2(Fs5);
    L0(dx123):
      return dx123;
    L1():
      dr98 = tryDispatchBuiltin.1("[", Fs5);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L3() else L2(dr98);
    L2(Fs7):
      nas12 = ld nas;
      nas13 = force? nas12;
      __14 = ldf `[` in base;
      r283 = dyn __14(Fs7, nas13);
      goto L0(r283);
    L3():
      dx122 = getTryDispatchBuiltinValue(dr98);
      goto L0(dx122);
    };
    p46 = prom<V +>{
      dfs16 = ld dfs;
      dfs17 = force? dfs16;
      checkMissing(dfs17);
      c89 = `is.object`(dfs17);
      if c89 then L1() else L2(dfs17);
    L0(dx125):
      return dx125;
    L1():
      dr100 = tryDispatchBuiltin.1("[", dfs17);
      dc50 = getTryDispatchBuiltinDispatched(dr100);
      if dc50 then L3() else L2(dr100);
    L2(dfs19):
      nas14 = ld nas;
      nas15 = force? nas14;
      __15 = ldf `[` in base;
      r285 = dyn __15(dfs19, nas15);
      goto L0(r285);
    L3():
      dx124 = getTryDispatchBuiltinValue(dr100);
      goto L0(dx124);
    };
    p47 = prom<V +>{
      rdf2 = ld rdf;
      rdf3 = force? rdf2;
      checkMissing(rdf3);
      return rdf3;
    };
    r288 = dyn safe_pf[, , , `lower.tail`](p45, p46, p47, FALSE);
    check L459() else D155();
  D153():
    deopt 612 [r281];
  D155():
    deopt 622 [r288];
  L457():
    goto L82(r281);
  L459():
    l38 = ld P;
    c90 = `is.object`(l38);
    if c90 then L460() else L461(r288, l38);
  L83(dx127):
    st P = dx127;
    sym25 = ldf list;
    base25 = ldf list in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L464() else L465();
  L460():
    dr102 = tryDispatchBuiltin.0("[<-", l38, r288);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L462() else L461(r288, dr102);
  L461(r290, l40):
    nas16 = ld nas;
    check L463() else D156();
  D156():
    deopt 624 [r290, l40, r288, nas16];
  L84(r295):
    l41 = ld aod;
    c91 = `is.object`(l41);
    if c91 then L469() else L470(r295, l41);
  L462():
    dx126 = getTryDispatchBuiltinValue(dr102);
    goto L83(dx126);
  L463():
    nas17 = force? nas16;
    ___12 = ldf `[<-` in base;
    r293 = dyn ___12(l40, r288, nas17);
    goto L83(r293);
  L464():
    Fs8 = ld Fs;
    check L466() else D157();
  L465():
    r294 = dyn base25(<sym Fs>, <sym P>);
    goto L84(r294);
  D157():
    deopt 630 [Fs8];
  L85(r300, dx129):
    st aod = dx129;
    goto L68();
  L466():
    Fs9 = force? Fs8;
    checkMissing(Fs9);
    P = ld P;
    check L467() else D158();
  L469():
    dr104 = tryDispatchBuiltin.0("[<-", l41, r295);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L471() else L470(r295, dr104);
  L470(r298, l43):
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L472() else L473();
  D158():
    deopt 632 [P];
  L86(r306, r307, r308):
    ___13 = ldf `[<-` in base;
    r310 = dyn ___13(l41, <missing>, r308, r307);
    goto L85(r306, r310);
  L467():
    P1 = force? P;
    checkMissing(P1);
    list = ldf list in base;
    r296 = dyn list(Fs9, P1);
    check L468() else D159();
  L471():
    dx128 = getTryDispatchBuiltinValue(dr104);
    goto L85(r295, dx128);
  L472():
    c92 = ldf c in base;
    r309 = dyn c92("F value", "Pr(>F)");
    check L474() else D160();
  L473():
    r305 = dyn base26("F value", "Pr(>F)");
    goto L86(r298, r295, r305);
  D159():
    deopt 635 [r296];
  D160():
    deopt 643 [r298, l43, r295, r309];
  L468():
    goto L84(r296);
  L474():
    goto L86(r298, r295, r309);
  }
}