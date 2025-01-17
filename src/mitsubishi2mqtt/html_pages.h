String html_page_reboot = R"====(
  <body>
  <div style='text-align:left;display:inline-block;min-width:340px;'>
    <div style='text-align:center;'>
      <noscript>To user Mitsubishi2MQTT, you need to activate Javascript<br/></noscript>
      <h3>_UNIT_NAME_</h3>
    </div>

  <p>Rebooting... Refresh in 10s...</p>
  <script>
  setTimeout(function () {
   window.location.href= '/';
  }, 10000);
</script>
)====";

String html_page_reset = R"====(
  <body>
  <div style='text-align:left;display:inline-block;min-width:340px;'>
    <div style='text-align:center;'>
      <h3>_UNIT_NAME_</h3>
    </div>

  <p>Resetting... Connect to SSID HVAC_XXXX...</p>

)====";


String html_page_save_reboot = R"====(
  <body>
  <div style='text-align:left;display:inline-block;min-width:340px;'>
    <div style='text-align:center;'>
      <noscript>To user Mitsubishi2MQTT, you need to activate Javascript<br/></noscript>
      <h3>_UNIT_NAME_</h3>
    </div>

  <p>Saving configuration and rebooting... Refresh in 10s...</p>
  <script>
  setTimeout(function () {
   window.location.href= '/';
  }, 10000);
</script>

)====";

String html_page_mqtt = R"====(
  <body>
  <div style='text-align:left;display:inline-block;min-width:340px;'>
    <div style='text-align:center;'>
      <noscript>To user Mitsubishi2MQTT, you need to activate Javascript<br/></noscript>
      <h3>_UNIT_NAME_</h3>
      <h2>Config</h2>
    </div>
    <div id='l1' name='l1'></div>
      <fieldset>
    <legend><b>&nbsp;MQTT Parameters&nbsp;</b></legend>
    <form method='get'>
      <p><b>Friendly name</b><br/><input id='fn' name='fn' placeholder=' ' value='_UNIT_NAME_'></p>
      <p><b>Host</b> ()<br/><input id='mh' name='mh' placeholder=' ' value='_MQTT_HOST_'></p>
      <p><b>Port</b> (1883)<br/><input id='ml' name='ml' placeholder='1883' value='_MQTT_PORT_'></p>
      <p><b>User</b> <br/><input id='mu' name='mu' placeholder='DVES_USER' value='_MQTT_USER_'></p>
      <p><b>Password</b><br/><input id='mp' name='mp' type='password' placeholder='Password' value='_MQTT_PASSWORD_'></p>
      <p><b>Topic</b><br/><input id='mt' name='mt' placeholder='topic' value='_MQTT_TOPIC_'></p>
    </p><br/><button name='save' type='submit' class='button bgrn'>Save & Reboot</button>
    </form>
  </fieldset>
    <div>
  </div>
  <p><form action='/setup' method='get'><button>Back</button></form></p>
)====";

String html_page_others = R"====(
  <body>
  <div style='text-align:left;display:inline-block;min-width:340px;'>
    <div style='text-align:center;'>
      <noscript>To user Mitsubishi2MQTT, you need to activate Javascript<br/></noscript>
      <h3>_UNIT_NAME_</h3>
      <h2>Config</h2>
    </div>
    <div id='l1' name='l1'></div>
      <fieldset>
    <legend><b>&nbsp;Others Parameters&nbsp;</b></legend>
    <form method='get'>
      <p><b>HA Autodiscovery</b>
          <select name="HAA">
          <option value="ON" _HAA_ON_>ON</option>
          <option value="OFF" _HAA_OFF_>OFF</option>
        </select> </p>
      <p><b>Home Assistant Autodiscovery topic</b> ()<br/><input id='haat' name='haat' placeholder=' ' value='_HAA_TOPIC_'></p>
   <p><b>Debug</b>
        <select name="Debug">
          <option value="ON" _DEBUG_ON_>ON</option>
          <option value="OFF" _DEBUG_OFF_>OFF</option>
        </select> </p>
    </p><br/><button name='save' type='submit' class='button bgrn'>Save & Reboot</button>
    </form>
  </fieldset>
    <div>
  </div>
  <p><form action='/setup' method='get'><button>Back</button></form></p>
)====";

String html_page_console = R"====(
  <body>
  <div style='text-align:left;display:inline-block;min-width:340px;'>
    <div style='text-align:center;'>
      <noscript>To user Mitsubishi2MQTT, you need to activate Javascript<br/></noscript>
      <h3>_UNIT_NAME_</h3>
      <h2>Console</h2>
    </div>
    <div id='l1' name='l1'>
    <textarea>_CONSOLE_</textarea></div>
     <div>
  </div>
  <p><form action='/' method='get'><button>Back</button></form></p>
)====";

String html_page_wifi = R"====(
  <body>
  <div style='text-align:left;display:inline-block;min-width:340px;'>
    <div style='text-align:center;'>
      <noscript>To user Mitsubishi2MQTT, you need to activate Javascript<br/></noscript>
      <h3>_UNIT_NAME_</h3>
    </div>
    <div id='l1' name='l1'></div>
      <fieldset>
    <legend><b>&nbsp;WIFI Parameters&nbsp;</b></legend>
    <form method='get'>
      <p><b>Hostname</b><br/><input id='hn' name='hn' placeholder=' ' value='_UNIT_NAME_'></p>
      <p><b>SSID</b> ()<br/><input id='ssid' name='ssid' placeholder=' ' value='_SSID_'></p>
      <p><b>Password</b> ()<br/><input id='psk' name='psk' placeholder=' ' value='_PSK_'></p>
      <p><b>OTA Password</b><br/><input id='otapwd' name='otapwd' placeholder=' ' value='_OTA_PWD_'></p>
    </p><br/><button name='save' type='submit' class='button bgrn'>Save & Reboot</button>
    </form>
  </fieldset>
  <p><form action='/setup' method='get'><button>Back</button></form></p>
)====";


String html_page_control = R"====(
<body>
<script>
function $_GET(param) {
  var vars = {};
  window.location.href.replace( location.hash, '' ).replace( 
    /[?&]+([^=&]+)=?([^&]*)?/gi, // regexp
    function( m, key, value ) { // callback
      vars[key] = value !== undefined ? value : '';
    }
  );

  if ( param ) {
    return vars[param] ? vars[param] : null;  
  }
  return vars;
}

function setTemp(b)
{
  var t = document.getElementById('TEMP');
  if(b && t.value < 31)
   { t.value++; }
  else if(!b && t.value > 16)
   { t.value--; }
  document.getElementById("FTEMP_").submit();
}

window.onload=function(){
    if($_GET('TEMP')) {
    document.getElementById('TEMP').value=$_GET('TEMP');
  }
}
</script>

  <div style='text-align:left;display:inline-block;min-width:340px;'>
    <div style='text-align:center;'>
      <noscript>To user Mitsubishi2MQTT, you need to activate Javascript<br/></noscript>
      <h3>_UNIT_NAME_</h3>
      <h2>Current temp _ROOMTEMP_</h2>
      <fieldset>
    <legend><b>&nbsp;Control Unit&nbsp;</b></legend>
   <p style="display: inline;"><b>Temp</b>(celsius)<br/>
         
         <button onclick="setTemp(0)" class='temp bgrn' style="text-align:center;width:30px;margin-left: 5px;margin-right: 2px;">-</button>
          <form id="FTEMP_" style="display:inline"><input name="TEMP" id="TEMP" type="text" value="_TEMP_" style="text-align:center;width:60px;margin-left: 5px;margin-right: 2px;"/></form> 
          <button onclick="setTemp(1)" class='temp bgrn' style="text-align:center;width:30px;margin-left: 5px;margin-right: 2px;">+</button>
      </p>
      <p>
        <b>Power</b>
          <form onchange="this.submit()">
        <select name="POWER">
          <option value="ON" _POWER_ON_>ON</option>
          <option _POWER_OFF_>OFF</option>
        </select></form>
      </p>

      <p><b>Mode</b>
      <form onchange="this.submit()">    
        <select name="MODE">
          <option value="AUTO" _MODE_A_>&#9851; AUTO</option>
          <option value="DRY" _MODE_D_>&#128167; DRY</option>
          <option value="COOL" _MODE_C_>&#10052;&#65039; COOL</option>
          <option value="HEAT" _MODE_H_>&#9728;&#65039; HEAT</option>
          <option value="FAN" _MODE_F_>&#10051; FAN</option>
        </select> </form></p>
     
      <p><b>Fan</b>
      <form onchange="this.submit()">    
        <select name="FAN">
          <option value="AUTO" _FAN_A_>&#9851; AUTO</option>
          <option value="QUIET" _FAN_QUIET_>.... QUIET</option>
          <option value="1" _FAN_1_>...: SPEED 1</option>
          <option value="2" _FAN_2_>..:: SPEED 2</option>
          <option value="3" _FAN_3_>.::: SPEED 3</option>
          <option value="4" _FAN_4_>:::: SPEED 4</option>
       
        </select></form></p>
      <p><b>Vane</b>
      <form onchange="this.submit()">
        <select name="VANE">
          <option value="AUTO" _VANE_A_>&#9851; AUTO</option>
          <option value="SWING" _VANE_S_>&#9887; SWING</option>
          <option value="1" _VANE_1_>&#10143; POS 1</option>
          <option value="2" _VANE_2_>&#10143; POS 2</option>
          <option value="3" _VANE_3_>&#10143; POS 3</option>
          <option value="4" _VANE_4_>&#10143; POS 4</option>
          <option value="5" _VANE_5_>&#10143; POS 5</option>
       </select></form></p>
      <p><b>Wide Vane</b>
      <form onchange="this.submit()">
        <select name="WIDEVANE">
          <option value="AUTO" _WVANE_A_>&#9851; AUTO</option>
          <option value="SWING" _WVANE_S_>&#9887; SWING</option>
          <option value="<<" _WVANE_1_><< POS 1</option>
          <option value="<" _WVANE_2_><  POS 2</option>
          <option value="|" _WVANE_3_>|  POS 3</option>
          <option value=">" _WVANE_4_>>  POS 4</option>
          <option value=">>" _WVANE_5_>>> POS 5</option>
          <option value="<>" _WVANE_6_><> POS 6</option>
        </select></form></p>
    </p>
    </form>
  </fieldset>
  <p><form action='/' method='get'><button class="back">Back</button></form></p>

)====";
