
#version 330 core
//out vec4 FragColor;
out vec4 testcolor;
//
in vec3 ourColor;
in vec2 TexCoord;
in vec3 Normal;

in vec3 FragPos;
//0------------------
uniform bool set=false;
uniform vec3 color;
//---------------------
uniform sampler2D ourTexture;
//---------------------
uniform sampler2D texture1;
uniform sampler2D texture2;
uniform sampler2D t_wall;
//---------------------
uniform sampler2D load_tex;
 //===============================================
 uniform vec3 color_1;uniform vec3 color_2;
 uniform vec3 light;
 //-;
 uniform vec3 lightPos;//uniform vec3 FragPos;
   
uniform vec3 lightColor;
uniform vec3 objectColor;

void main()
{
  // testcolor = mix(texture(texture1, TexCoord), texture(texture2, TexCoord)*vec4(color_1*light,1.0f), 0.5f);

 /* float ambientStrength = 0.1;
    vec3 ambient = ambientStrength * lightColor;
  	
    // diffuse 
    vec3 norm = normalize(Normal);
    vec3 lightDir = normalize(lightPos - FragPos);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = diff * lightColor;
            
    vec3 result = (ambient + diffuse) * color_1;
 */


//if(set == false)
//{
//    testcolor = (texture(load_tex, TexCoord) *vec4(color_1*light,1.0f) );
//}
//else
//{
       testcolor = vec4(1.0f,1.0f,1.0f, 1.0f);
  //  testcolor=vec4(color_1 * light,1.0f);
//}
  
 
}//end