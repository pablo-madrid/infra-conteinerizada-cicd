# infra-conteinerizada-cicd
Este trabalho apresenta a implantação de uma infraestrutura conteinerizada em uma 
máquina virtual Debian, utilizando Docker e Portainer para o gerenciamento visual dos serviços. O 
ambiente foi organizado em Stacks independentes para produtividade, controle de versão, integração 
contínua e registro privado de imagens. Foram implantados o Nextcloud integrado ao MariaDB, o 
Forgejo com seu Runner e o Harbor. Um projeto de calculadora em C foi enviado ao Forgejo e 
submetido a uma pipeline automatizada de compilação e testes. Por fim, as imagens do MariaDB, 
Nextcloud, Forgejo e Runner foram enviadas a um projeto privado no Harbor. Os resultados 
demonstraram o funcionamento integrado dos serviços e evidenciaram dificuldades relacionadas à 
inicialização do Portainer, divergência entre branches Git, checkout do código na pipeline e 
publicação de imagens no registro privado. 

Abstract. This paper presents the deployment of a containerized infrastructure on a Debian virtual 
machine, using Docker and Portainer for visual service management. The environment was 
organized into independent stacks for productivity, version control, continuous integration, and 
private image registry. Nextcloud integrated with MariaDB, Forgejo with its Runner, and Harbor 
were deployed. A C calculator project was pushed to Forgejo and submitted to an automated 
compilation and testing pipeline. Finally, the MariaDB, Nextcloud, Forgejo, and Runner images 
were pushed to a private Harbor project. The results demonstrated the integrated operation of the 
services and highlighted difficulties related to Portainer initialization, Git branch divergence, source
code checkout in the pipeline, and image publishing to the private registry. 
1. Introdução 
A utilização de containers tornou-se uma prática relevante na implantação de aplicações distribuídas, 
pois permite isolar serviços, padronizar ambientes e simplificar processos de instalação, atualização e 
manutenção. O Docker possibilita empacotar aplicações e dependências em imagens reproduzíveis, 
enquanto o Docker Compose descreve ambientes formados por múltiplos containers. 
O Portainer complementa esse ecossistema ao oferecer uma interface web para criação de Stacks, 
acompanhamento de containers, configuração de volumes, redes e variáveis de ambiente. Em 
paralelo, práticas de integração contínua e entrega contínua (CI/CD) automatizam etapas de 
validação, compilação e testes após alterações no código-fonte, reduzindo erros manuais. 
Este trabalho teve como objetivo configurar, em uma máquina virtual Debian, uma infraestrutura 
conteinerizada gerenciada pelo Portainer. O ambiente foi dividido em uma Stack de produtividade 
com Nextcloud e MariaDB, uma Stack de desenvolvimento com Forgejo e Forgejo Runner e uma 
Stack de registro privado baseada no Harbor. Também foi validado um fluxo de CI para um projeto 
em C e o envio das imagens utilizadas para um repositório privado. 
