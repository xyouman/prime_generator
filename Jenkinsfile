pipeline {
    agent { docker { image 'python:3.5.1' } }
    stages {
        stage('deploy') {
            steps {
                sh 'hello world'
                sh '''
                    echo 'test echo 1'
                    echo 'test echo 2'
                   '''
            }
        }
    }
}